#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERADRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB3DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraDrag_TypeDefinitionIndex = 64091;

	class ConfigHollowCameraDrag : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* camraZToDragCurve; // 0x10
		::UnityEngine::AnimationCurve* dragDampCurve; // 0x18
		::System::Single freezeCamDragDampFactor; // 0x20
		::System::Single diagonalBorderRatio; // 0x24
		::System::Single dragSpeedFactorDPad; // 0x28
		::System::Single dampBorderRatioRight; // 0x2C
		::System::Single borderRatioH; // 0x30
		::System::Single dragDumpingTime; // 0x34
		::System::Single dampBorderRatioLeft; // 0x38
		::System::Single camraZToDragRatioMouse; // 0x3C
		::System::Boolean EnableDragDebug; // 0x40
		::System::Boolean isCustomDragDampCurve; // 0x41
		::System::Single borderRatioW; // 0x44
		::System::Single camraZToDragRatioTouch; // 0x48
		::UnityEngine::Vector2 dragSpeedFactorMouse; // 0x4C
		::System::Single borderOffset; // 0x54
		::UnityEngine::Vector2 dragSpeedFactorTouch; // 0x58
		::System::Single dampBorderRatioTop; // 0x60
		::System::Single camraZToDragRatioDPad; // 0x64
		::System::Single dampBorderRatioBottom; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERADRAG__CTOR_OFFSET))(this);
		}
	};
}
