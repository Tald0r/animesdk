#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AccessoryShowMode.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CGRuntimeReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CGRUNTIMEUNIT_GETSYNCENTITYTAGID_OFFSET UNITYSDK_OFFSET(0x6BDCD30)
#define MOLEMOLE_CGRUNTIMEUNIT_GET_REFERENCENAME_OFFSET UNITYSDK_OFFSET(0x6BDCCC0)
#define MOLEMOLE_CGRUNTIMEUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x6BDD0B0)

namespace MoleMole
{
	inline static constexpr unsigned int CGRuntimeUnit_TypeDefinitionIndex = 59167;

	class CGRuntimeUnit : public ::System::Object
	{
	public:
		::MoleMole::Config::EntityType unitType; // 0x10
		::System::Int32 unitId; // 0x14
		::System::Int32 index; // 0x18
		::MoleMole::CGRuntimeUnitLoadType loadType; // 0x1C
		::System::Boolean LoadSkin; // 0x20
		::System::Int32 SkinId; // 0x24
		::System::Boolean LoadAccessory; // 0x28
		::MoleMole::AccessoryShowMode showMode; // 0x2C
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeReference*>* references; // 0x30
		::UnityEngine::Transform* unitObj; // 0x38
		::UnityEngine::Vector3 initPos; // 0x40
		::UnityEngine::Vector3 initAngles; // 0x4C

		::System::Void _ctor(::MoleMole::Config::EntityType _unitType, ::System::Int32 _unitId, ::System::Int32 _index, ::UnityEngine::Transform* taUnitObj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT__CTOR_OFFSET))(this, _unitType, _unitId, _index, taUnitObj);
		}

		::System::String* get_ReferenceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT_GET_REFERENCENAME_OFFSET))(this);
		}

		static ::System::String* GetSyncEntityTagId(::MoleMole::Config::EntityType EntityType, ::System::Int32 unitId, ::System::Int32 index)
		{
			return ((::System::String*(*)(::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT_GETSYNCENTITYTAGID_OFFSET))(EntityType, unitId, index);
		}
	};
}
