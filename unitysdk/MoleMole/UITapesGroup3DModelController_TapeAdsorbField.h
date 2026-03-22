#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_CHECKFIELD_OFFSET UNITYSDK_OFFSET(0x9A258C0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x9A25740)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_GET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x9A25760)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_GET_HALFSCREENWIDTHWORLD_OFFSET UNITYSDK_OFFSET(0x9A25770)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_ISVALIDFIELD_OFFSET UNITYSDK_OFFSET(0x9A259B0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_SETFIELD_OFFSET UNITYSDK_OFFSET(0x9A257E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_SET_HALFSCREENWIDTHWORLD_OFFSET UNITYSDK_OFFSET(0x9A25780)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A25B50)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x9A25790)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController_TapeAdsorbField_TypeDefinitionIndex = 69970;

	class UITapesGroup3DModelController_TapeAdsorbField : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_kFielInvaildVal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UITapesGroup3DModelController_TapeAdsorbField_TypeDefinitionIndex)->GetStaticField(0x10210);
		}
		::UnityEngine::Vector3 _worldLeftBorder; // 0x10
		::UnityEngine::Vector3 _worldRightBorder; // 0x1C
		::UnityEngine::Vector3 _worldCenterPos; // 0x28
		::System::Single _fieldWidth; // 0x34
		::System::Single _HalfScreenWidthWorld_k__BackingField; // 0x38

		::System::Void _ctor(::UnityEngine::Vector3 worldStartCenterPos, ::System::Single fieldWidth, ::System::Single halfScreenWidthWorld)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD__CTOR_OFFSET))(this, worldStartCenterPos, fieldWidth, halfScreenWidthWorld);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_Center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_GET_CENTER_OFFSET))(this);
		}

		::System::Single get_FieldWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_GET_FIELDWIDTH_OFFSET))(this);
		}

		::System::Single get_HalfScreenWidthWorld()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_GET_HALFSCREENWIDTHWORLD_OFFSET))(this);
		}

		::System::Void set_HalfScreenWidthWorld(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_SET_HALFSCREENWIDTHWORLD_OFFSET))(this, value);
		}

		::System::Void SetField(::UnityEngine::Vector3 worldStartCenterPos, ::System::Single fieldWidth, ::System::Single halfScreenWidthWorld)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_SETFIELD_OFFSET))(this, worldStartCenterPos, fieldWidth, halfScreenWidthWorld);
		}

		::System::Single CheckField(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_CHECKFIELD_OFFSET))(this, worldPosition);
		}

		::System::Boolean IsValidField(::System::Single val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TAPEADSORBFIELD_ISVALIDFIELD_OFFSET))(this, val);
		}
	};
}
