#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_29F53912E31AD3EE;
class Class_1_5F780812A1FAD31A;
class Class_2_B6010908CC293A93;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDebug3DModelController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xB2CA940)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB2CA950)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB2CA9C0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONPROCESSSENSOR_OFFSET UNITYSDK_OFFSET(0xB2CBD30)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB2CB500)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2CB570)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2CAAC0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2CB400)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB2CB6D0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CBE20)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB2CBEB0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB2CBF20)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2CBF30)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2CBF40)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2CBF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGyro3DModelTestPopWindowController_TypeDefinitionIndex = 66949;

	class UIGyro3DModelTestPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_5F780812A1FAD31A* _gyroscopeInputHandler; // 0x2F8
		::Class_1_29F53912E31AD3EE* _gyroscopeInputHandler2; // 0x300
		::Class_1_29F53912E31AD3EE* _gyroscopeInputHandler3; // 0x308
		::UnityEngine::Transform* _rotateModel_1; // 0x310
		::UnityEngine::Transform* _rotateModel_2; // 0x318
		::UnityEngine::Transform* _rotateModel_3; // 0x320
		::UnityEngine::Transform* _rotateModel_4; // 0x328
		::UnityEngine::Transform* _rotateModel_5; // 0x330
		::MoleMole::UIGeneralDebug3DModelController* _3dModelController; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_B6010908CC293A93* get__viewModel()
		{
			return ((::Class_2_B6010908CC293A93*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnProcessSensor(::UnityEngine::Vector3 gyro, ::UnityEngine::Vector3 accel, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONPROCESSSENSOR_OFFSET))(this, gyro, accel, deltaTime);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
