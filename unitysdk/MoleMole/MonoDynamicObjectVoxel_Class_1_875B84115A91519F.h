#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace MoleMole { class MonoTerrainZoneVoxel; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8F1CDF0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8F1D080)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8F1D0E0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8F1D090)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F1CDE0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1CDD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDynamicObjectVoxel_Class_1_875B84115A91519F_TypeDefinitionIndex = 69574;

	class MonoDynamicObjectVoxel_Class_1_875B84115A91519F : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::MonoTerrainZoneVoxel*>* Field_1_2; // 0x10
		::System::Object* Field_1_1; // 0x18
		::MoleMole::MonoDynamicObjectVoxel* Field_1_3; // 0x20
		::System::Int32 Field_1_0; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_CLASS_1_875B84115A91519F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
