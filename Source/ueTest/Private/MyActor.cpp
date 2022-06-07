// Fill out your copyright notice in the Description page of Project Settings.
//#pragma optimize("",off)

#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include <memory>

struct _FMemoryDeleter
{
	void operator()(uint8* p) const
	{
		FMemory::Free(p);
	}
} ;

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
 
// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
 
}
void AMyActor::Test()
{ 
	FMyStruct stru;
	stru.IntValue = 3;
	stru.StrValue = FString(TEXT("Str1"));
	stru.StrValue2 = FString(TEXT("Str2")),
	stru.VecValue = FVector(1.f, 2.f, 3.f);
	stru.SafeObjectPointer = this;

	for (TFieldIterator<FProperty> it(stru.StaticStruct()); it; ++it)
	{
		auto name = it->GetName();
		if (it->GetCPPType() == "int32")
		{
			auto prop = CastField<FIntProperty>(*it);
			auto ptr = prop->ContainerPtrToValuePtr<int32>(&stru);
			prop->SetPropertyValue(&stru, 3333);
			UKismetSystemLibrary::PrintString(this, name + "(int32):" + FString::FromInt(*ptr));
		}
		else if (it->GetCPPType() == "float")
		{
			auto prop = CastField<FFloatProperty>(*it);
			auto ptr = prop->ContainerPtrToValuePtr<float>(&stru);

			UKismetSystemLibrary::PrintString(this, name + "(float):" + FString::SanitizeFloat(*ptr));
		}
		else if (it->GetCPPType() == "FString")
		{
			auto prop = CastField<FStrProperty>(*it);
			auto ptr = prop->ContainerPtrToValuePtr<FString>(&stru);
			// set string to XXX
			prop->SetPropertyValue(ptr, "XXX");
			UKismetSystemLibrary::PrintString(this, name + "(FString):" + *ptr);
		}
		else if (it->GetCPPType() == "FVector")
		{
			auto prop = CastField<FStructProperty>(*it);
			auto ptr = prop->ContainerPtrToValuePtr<FVector>(&stru);
			UKismetSystemLibrary::PrintString(this, name + "(FVector):" + ptr->ToString());
		} 
		else if (auto prop = CastField<FObjectProperty>(*it))
		{  
			auto ptr = prop->ContainerPtrToValuePtr<UObject*>(&stru);  
		   
			if (ptr && *ptr)
			{
				auto _ObjName = (*ptr)->GetName(); 
				auto hasTest2 = (*ptr)->FindFunction(TEXT("Test2"));
				UKismetSystemLibrary::PrintString(this, name + 
					"("+ (*ptr)->GetClass()->GetPrefixCPP()+ (*ptr)->GetClass()->GetName()+") :" 
					+ _ObjName +
					(hasTest2 ? " has Test2()" : ""));
				if (hasTest2)
				{ 
				 
					auto Test2Ptr = FindUField<UFunction>((*ptr)->GetClass(),TEXT("Test2"));
					if (Test2Ptr)
					{ 
						auto _funcName = Test2Ptr->GetName();
						if (hasTest2 == Test2Ptr)
						{
							// invoke function
							struct 
							{
								int32 par = 42; 
							} param;

							uint8* buffer = (uint8*)FMemory_Alloca(Test2Ptr->PropertiesSize );
							FMemory::Memzero(buffer + Test2Ptr->ParmsSize, Test2Ptr->PropertiesSize - Test2Ptr->ParmsSize);
							FMemory::Memcpy(buffer, &param, Test2Ptr->ParmsSize);
							auto _Ret = buffer + Test2Ptr->ReturnValueOffset;
							FFrame frame(nullptr,Test2Ptr,buffer,nullptr, Test2Ptr->ChildProperties);
							Test2Ptr->Invoke(*ptr, frame, _Ret);
							UKismetSystemLibrary::PrintString(this, "  > " + FString::FromInt(*(int32*)_Ret) ); 
							FMemory::Free(buffer);
						} 
					}
				}
			}
			else
			{
				UKismetSystemLibrary::PrintString(this, name + "(UObject): nullptr"  );
			}
			 
		}

	}
	 
}

int32 AMyActor::Test2(int32 Par1)
{
	auto ret = Par1 * 2;
	UKismetSystemLibrary::PrintString(this, "call " + this->GetName() + "->Test2("+FString::FromInt(Par1)+")");
	return ret;
}
// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

