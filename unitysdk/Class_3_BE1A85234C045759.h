#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraMoveNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_BE1A85234C045759_METHOD_3_0FC1CEE4654C1D74_OFFSET UNITYSDK_OFFSET(0x7358640)
#define CLASS_3_BE1A85234C045759_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x7358790)
#define CLASS_3_BE1A85234C045759_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0x7358AB0)
#define CLASS_3_BE1A85234C045759_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7358A50)
#define CLASS_3_BE1A85234C045759_METHOD_3_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x7358AC0)
#define CLASS_3_BE1A85234C045759__CTOR_OFFSET UNITYSDK_OFFSET(0x7358A40)

inline static constexpr unsigned int Class_3_BE1A85234C045759_TypeDefinitionIndex = 64363;

class Class_3_BE1A85234C045759 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_3_0; // 0x28
	::MoleMole::Config::ConfigLoginCameraMoveNode* Field_3_1; // 0x30
	::UnityEngine::Vector3 Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE1A85234C045759__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FC1CEE4654C1D74(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_BE1A85234C045759_METHOD_3_0FC1CEE4654C1D74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE1A85234C045759_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE1A85234C045759_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_BE1A85234C045759_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE1A85234C045759_METHOD_3_F2A1D3C2AD5054B1_OFFSET))(this);
	}
};
