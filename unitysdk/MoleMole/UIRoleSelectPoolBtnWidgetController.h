#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_109;
class Class_2_60638234271CCDB8_109_Class_2_EF16346D79C18F15_8;
namespace MoleMole { class MonoRoleSelectPoolBtnConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleSelectPoolBtnWidgetContext; }

#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2462F0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA2459D0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA246390)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA2455F0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA245920)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_OPENGACHAROLESELECTWINDOW_OFFSET UNITYSDK_OFFSET(0xA246470)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA245B00)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_SETPOINTVIEW_OFFSET UNITYSDK_OFFSET(0xA2469C0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_SETPROGRESSFORGACHATIMES_OFFSET UNITYSDK_OFFSET(0xA246A70)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA247060)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xA247090)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xA2470A0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__SETPROGRESSFORGACHATIMES_G__DOSETPROGRESS_9_1_OFFSET UNITYSDK_OFFSET(0xA246D20)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__SETPROGRESSFORGACHATIMES_G__PLAYPROGRESSANIM_9_0_OFFSET UNITYSDK_OFFSET(0xA246BF0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2470B0)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA247120)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA247190)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA247210)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA247270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPoolBtnWidgetController_TypeDefinitionIndex = 70623;

	class UIRoleSelectPoolBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 SpecialGachaCount = 0x32; // 0x0
		::Class_2_60638234271CCDB8_109* _view; // 0x2A0
		::MoleMole::MonoRoleSelectPoolBtnConfig* _config; // 0x2A8
		::MoleMole::UIRoleSelectPoolBtnWidgetContext* _context; // 0x2B0
		::System::Single _maxProgressValue; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenGachaRoleSelectWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_OPENGACHAROLESELECTWINDOW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetPointView(::Class_2_60638234271CCDB8_109_Class_2_EF16346D79C18F15_8* pointView, ::System::Boolean isFull)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_60638234271CCDB8_109_Class_2_EF16346D79C18F15_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_SETPOINTVIEW_OFFSET))(this, pointView, isFull);
		}

		::System::Void SetProgressForGachaTimes(::System::Int32 curValue, ::System::Int32 fullValue, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER_SETPROGRESSFORGACHATIMES_OFFSET))(this, curValue, fullValue, playAnim);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void _SetProgressForGachaTimes_g__PlayProgressAnim_9_0(::System::Single prvProgress, ::System::Single targetProgress, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__SETPROGRESSFORGACHATIMES_G__PLAYPROGRESSANIM_9_0_OFFSET))(this, prvProgress, targetProgress, duration);
		}

		::System::Void _SetProgressForGachaTimes_g__DoSetProgress_9_1(::System::Single normalizedProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER__SETPROGRESSFORGACHATIMES_G__DOSETPROGRESS_9_1_OFFSET))(this, normalizedProgress);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
