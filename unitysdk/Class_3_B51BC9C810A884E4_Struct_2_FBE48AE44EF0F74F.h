#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_B51BC9C810A884E4_STRUCT_2_FBE48AE44EF0F74F_INVOKE_OFFSET UNITYSDK_OFFSET(0x3B3120)
#define CLASS_3_B51BC9C810A884E4_STRUCT_2_FBE48AE44EF0F74F_METHOD_2_7DE025C93E2AEB30_OFFSET UNITYSDK_OFFSET(0x3B3130)
#define CLASS_3_B51BC9C810A884E4_STRUCT_2_FBE48AE44EF0F74F__CTOR_OFFSET UNITYSDK_OFFSET(0x2C3980)

inline static constexpr unsigned int Class_3_B51BC9C810A884E4_Struct_2_FBE48AE44EF0F74F_TypeDefinitionIndex = 60433;

struct alignas(8) Class_3_B51BC9C810A884E4_Struct_2_FBE48AE44EF0F74F
{
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_STRUCT_2_FBE48AE44EF0F74F__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Void Invoke(::Nap::NapECS::ArchetypeComponentAccessor& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_STRUCT_2_FBE48AE44EF0F74F_INVOKE_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_7DE025C93E2AEB30(::Nap::NapECS::ArchetypeComponentAccessor& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_STRUCT_2_FBE48AE44EF0F74F_METHOD_2_7DE025C93E2AEB30_OFFSET))(this, a1);
	}
	*/
};
