#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XftWeapon { class XWeaponTrail; }

#define XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19FD1BF0)
#define XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19FD1C90)
#define XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19FD1CF0)
#define XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19FD1CA0)
#define XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FD1BE0)
#define XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCEB70)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrail__InitDataCo_d__123_TypeDefinitionIndex = 36119;

	class XWeaponTrail__InitDataCo_d__123 : public ::System::Object
	{
	public:
		::XftWeapon::XWeaponTrail* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL__INITDATACO_D__123_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
