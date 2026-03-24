#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_571902F418F29BB4;
class Class_2_D6646C12B5D25CB4;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2B9620)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0xB2B96C0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_SAMPLEANIM_OFFSET UNITYSDK_OFFSET(0xB2BA320)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2BA010)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BA750)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYADDEXPANI_OFFSET UNITYSDK_OFFSET(0xB2BA1F0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYUPGRADELVTEXTANIM_OFFSET UNITYSDK_OFFSET(0xB2BA420)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHINITTARGETEXP_OFFSET UNITYSDK_OFFSET(0xB2B9AF0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B9C10)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__UPGRADETOCURRLEVEL_OFFSET UNITYSDK_OFFSET(0xB2BA590)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2BA7F0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___PLAYUPGRADELVTEXTANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0xB2BA780)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralExpProgressWidgetController_TypeDefinitionIndex = 51396;

	class UIGeneralExpProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D6646C12B5D25CB4* _view; // 0x2A0
		::Class_1_571902F418F29BB4* _context; // 0x2A8
		::System::Int32 _startLv; // 0x2B0
		::System::Int32 _startExp; // 0x2B4
		::System::Int32 _toExp; // 0x2B8
		::System::Action* _onPlayFinished; // 0x2C0
		::Class_1_571902F418F29BB4* data; // 0x2C8
		::System::Boolean _isStarted; // 0x2D0
		::System::Single _upgradePauseDuration; // 0x2D4
		::System::Boolean _isMaxLevel; // 0x2D8
		::System::Int32 totalProgressExpCount; // 0x2DC
		::System::Single startTime; // 0x2E0
		::System::Boolean _isUpLevel; // 0x2E4
		::System::Int32 oldLevel; // 0x2E8
		::System::Int32 newLevel; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void Refresh(::Class_1_571902F418F29BB4* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_571902F418F29BB4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_REFRESH_OFFSET))(this, data);
		}

		::System::Void StartExpProgress(::System::Single inFillDuration, ::System::Single upgradePauseDuration, ::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET))(this, inFillDuration, upgradePauseDuration, onFinished);
		}

		::System::Void _PlayAddExpAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYADDEXPANI_OFFSET))(this);
		}

		::System::Void _PlayUpgradeLvTextAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYUPGRADELVTEXTANIM_OFFSET))(this);
		}

		::System::Void _UpgradeToCurrLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__UPGRADETOCURRLEVEL_OFFSET))(this);
		}

		::System::Void SampleAnim(::UnityEngine::Animation* anim, ::System::String* clipName, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_SAMPLEANIM_OFFSET))(this, anim, clipName, normalizedTime);
		}

		::System::Void _RefreshInitTargetExp(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHINITTARGETEXP_OFFSET))(this, from, to);
		}

		::System::Void _RefreshProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHPROGRESS_OFFSET))(this, value);
		}

		::System::Void __PlayUpgradeLvTextAnim_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___PLAYUPGRADELVTEXTANIM_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}
