#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_OFFSETGROUP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD0A44A0)
#define MOLEMOLE_CONFIG_OFFSETGROUP_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD0A4990)
#define MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xD0A4500)
#define MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xD0A4A10)
#define MOLEMOLE_CONFIG_OFFSETGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0A43A0)
#define MOLEMOLE_CONFIG_OFFSETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A4490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OffsetGroup_TypeDefinitionIndex = 45388;

	class OffsetGroup : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::Config::OffsetGroup*>** StaticGet_DEFAULT_GROUPS()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(OffsetGroup_TypeDefinitionIndex)->GetStaticField(0x364C0);
		}
		static ::MoleMole::Config::OffsetGroup** StaticGet_ZERO()
		{
			return (::MoleMole::Config::OffsetGroup**)Il2CppClass::FromTypeDefinitionIndex(OffsetGroup_TypeDefinitionIndex)->GetStaticField(0x364C8);
		}
		::UnityEngine::Vector3 BackupPositionOffset; // 0x10
		::UnityEngine::Vector3 AngleOffset; // 0x1C
		::System::Boolean IsClampOffsetDistance; // 0x28
		::System::Boolean IsUseRotationXZ; // 0x29
		::System::Boolean IsUseRotationY; // 0x2A
		::UnityEngine::Vector3 RandomAngleRange; // 0x2C
		::UnityEngine::Vector3 PositionOffset; // 0x38
		::UnityEngine::Vector3 BackupAngleOffset; // 0x44
		::UnityEngine::Vector3 RandomPositionRange; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
