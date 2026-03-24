#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraAxisState.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x4D0800)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_ISINFOCUSTARGETMODE_OFFSET UNITYSDK_OFFSET(0x4D0840)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET UNITYSDK_OFFSET(0x4D0820)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET UNITYSDK_OFFSET(0x4D0830)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x4D0810)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_01DD87652E0552FE_OFFSET UNITYSDK_OFFSET(0xE2AB240)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x4D0A80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_0BA94794ED6DD07E_OFFSET UNITYSDK_OFFSET(0x4D0D20)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x4D1080)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1302A164EE4E310C_OFFSET UNITYSDK_OFFSET(0x4D0BE0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_162A7A6AD55533F2_OFFSET UNITYSDK_OFFSET(0x4D0980)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0x4D0880)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2923CE4B2F0850CF_OFFSET UNITYSDK_OFFSET(0x4D10E0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x4D0F60)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_43F7F5C3E587A224_OFFSET UNITYSDK_OFFSET(0x4D10A0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4B75E1858CDBA430_OFFSET UNITYSDK_OFFSET(0x4D10B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5DBD0C9CB5B2C268_OFFSET UNITYSDK_OFFSET(0x4D0D30)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5F9B14860EA6F2FD_OFFSET UNITYSDK_OFFSET(0x4D0970)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_655EB97F58032004_OFFSET UNITYSDK_OFFSET(0x4D0F50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6A7F69A381F965E9_OFFSET UNITYSDK_OFFSET(0x4D0890)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6E9A69E078D639A9_OFFSET UNITYSDK_OFFSET(0x4D0B40)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_851D7650AB039B8E_OFFSET UNITYSDK_OFFSET(0x4D0A50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_90F155C90510AC42_OFFSET UNITYSDK_OFFSET(0xE2AA300)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_99A2136794C075E7_OFFSET UNITYSDK_OFFSET(0x4D0940)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x4D0FF0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x4D0E90)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_EE328995A74C4B7C_OFFSET UNITYSDK_OFFSET(0x4D0BD0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x4D0BF0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBA744CE7479F95C_OFFSET UNITYSDK_OFFSET(0x4D0B50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x4D0E80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FDFA9E89965D071D_OFFSET UNITYSDK_OFFSET(0x4D0D50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x4D0850)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraData_TypeDefinitionIndex = 54208;

	struct alignas(8) OverShoulderCameraData
	{
		::PipelineCamera::EulerRotation _cameraRotation; // 0x10
		::Foundation::Variable_1<::UnityEngine::Vector3> _characterPosition; // 0x58
		::System::Single _startFov; // 0x78
		::System::Single _currentFov; // 0x7C
		::UnityEngine::Vector3 _dampingTargetPosition; // 0x80
		::MoleMole::Cameras::OverShoulderCameraConfig* _config; // 0x90
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* _overrideConfig; // 0x98
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendIn; // 0xA0
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendOut; // 0xA8
		::System::Boolean _enableYawAngleLimit; // 0xB0
		::Foundation::Variable_1<::System::Single> _centerYawAngle; // 0xB8
		::System::Single _yawAngleLimitThreshold; // 0xD0
		::MoleMole::Cameras::OverShoulderCameraAxisState _xAxisState; // 0xD4
		::MoleMole::Cameras::OverShoulderCameraAxisState _yAxisState; // 0xE0
		::System::Boolean _isInFocusTargetMode; // 0xEC
		::UnityEngine::Vector3 _curFocusTargetPos; // 0xF0
		::System::Single _focusTargetRotateDampSpeed; // 0xFC
		::Struct_2_52A902145F5BE513 _context; // 0x100
		::UnityEngine::Vector3 _xzDampingVelocity; // 0x1D8
		::System::Single _yDampingVelocity; // 0x1E4

		/*
		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::Struct_2_52A902145F5BE513& a4, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Quaternion, ::System::Single, ::Struct_2_52A902145F5BE513&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		::MoleMole::Cameras::OverShoulderCameraConfig* get_Config()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* get_OverrideConfig()
		{
			return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendIn()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendOut()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET))(this);
		}

		::System::Boolean get_IsInFocusTargetMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_ISINFOCUSTARGETMODE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 Method_2_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean Method_2_6A7F69A381F965E9(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6A7F69A381F965E9_OFFSET))(this, a1);
		}

		::System::Void Method_2_99A2136794C075E7(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_99A2136794C075E7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_5F9B14860EA6F2FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5F9B14860EA6F2FD_OFFSET))(this);
		}

		::System::Void Method_2_162A7A6AD55533F2(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_162A7A6AD55533F2_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Method_2_851D7650AB039B8E(::PipelineCamera::WorldBasicCameraData& a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_851D7650AB039B8E_OFFSET))(this, a1, a2);
		}
		*/

		::UnityEngine::Vector3 Method_2_0882BA2CA10E8E8E()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_0882BA2CA10E8E8E_OFFSET))(this);
		}

		::System::Void Method_2_6E9A69E078D639A9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6E9A69E078D639A9_OFFSET))(this, a1);
		}

		::System::Void Method_2_FBA744CE7479F95C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBA744CE7479F95C_OFFSET))(this, a1);
		}

		::System::Void Method_2_EE328995A74C4B7C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_EE328995A74C4B7C_OFFSET))(this, a1);
		}

		::System::Void Method_2_1302A164EE4E310C(::System::Single a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1302A164EE4E310C_OFFSET))(this, a1, a2, a3);
		}

		/*
		::UnityEngine::Quaternion Method_2_FA7F07669215B524()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FA7F07669215B524_OFFSET))(this);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData Method_2_01DD87652E0552FE(::MoleMole::Cameras::OverShoulderCameraData& a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Cameras::OverShoulderCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_01DD87652E0552FE_OFFSET))(a1);
		}
		*/

		/*
		::System::Void Method_2_0BA94794ED6DD07E(::PipelineCamera::WorldBasicCameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_0BA94794ED6DD07E_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean Method_2_90F155C90510AC42(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_90F155C90510AC42_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_5DBD0C9CB5B2C268(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5DBD0C9CB5B2C268_OFFSET))(this, a1, a2);
		}
		*/

		::PipelineCamera::EulerRotation Method_2_FDFA9E89965D071D(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::EulerRotation(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FDFA9E89965D071D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_FBF2CB29FD3B55E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_CED7A2E9A352C6FD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_CED7A2E9A352C6FD_OFFSET))(this);
		}

		::System::Void Method_2_655EB97F58032004(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_655EB97F58032004_OFFSET))(this, a1);
		}

		::System::Single Method_2_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_3422201382CE593B_OFFSET))(this);
		}

		::System::Void Method_2_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
		}

		/*
		::System::Void Method_2_10FFF5D129383396(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_10FFF5D129383396_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_43F7F5C3E587A224(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_43F7F5C3E587A224_OFFSET))(this, a1, a2);
		}

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_4B75E1858CDBA430(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4B75E1858CDBA430_OFFSET))(this, a1);
		}
		*/

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_2923CE4B2F0850CF(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2923CE4B2F0850CF_OFFSET))(this, a1, a2);
		}
		*/
	};
}
