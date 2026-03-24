#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18D76420)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BYTE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18D76620)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18D76680)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18D76630)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D76410)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x18D74D00)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMask__GetEnumerator_d__29_TypeDefinitionIndex = 35213;

	class ComponentMask__GetEnumerator_d__29 : public ::System::Object
	{
	public:
		::System::UInt64 _mask_5__3; // 0x10
		::System::Byte __2__current; // 0x18
		::System::Byte _baseIndex_5__4; // 0x19
		::System::Byte _i_5__5; // 0x1A
		::System::Byte _j_5__2; // 0x1B
		::System::Int32 __1__state; // 0x1C
		::Nap::NapECS::ComponentMask __4__this; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Byte System_Collections_Generic_IEnumerator_System_Byte__get_Current()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BYTE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
