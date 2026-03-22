#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define STATETREEGAMEPLAY_TESTFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7C0080)
#define STATETREEGAMEPLAY_TESTFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x7C0070)
#define STATETREEGAMEPLAY_TESTFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x1817A6C0)
#define STATETREEGAMEPLAY_TESTFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1817A780)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int TestFragment_TypeDefinitionIndex = 64699;

	struct alignas(4) TestFragment
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(TestFragment_TypeDefinitionIndex)->GetStaticField(0xE3B0);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::UnityEngine::Vector3 Position; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_TESTFRAGMENT__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_TESTFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_TESTFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_TESTFRAGMENT_REGISTERTYPE_OFFSET))();
		}
	};
}
