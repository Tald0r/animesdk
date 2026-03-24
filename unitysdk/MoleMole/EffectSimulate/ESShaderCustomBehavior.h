#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class NapGradient;
namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_0FABA7B7C4910501_OFFSET UNITYSDK_OFFSET(0xA7C1930)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_22FFB1F2200E3BA7_OFFSET UNITYSDK_OFFSET(0xA7C1750)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_28AEFC556CCDC741_OFFSET UNITYSDK_OFFSET(0xA7C1620)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xA7C1F80)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0xA7C1EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0xA7C11A0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_5BD179982EDEB0FC_OFFSET UNITYSDK_OFFSET(0xA7C1430)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_63E7CA2473DB5E8B_OFFSET UNITYSDK_OFFSET(0xA7C1300)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_6FF3E514220A5943_OFFSET UNITYSDK_OFFSET(0xA7C1290)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA16E66277F3799C_OFFSET UNITYSDK_OFFSET(0xA7C1200)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7C1F20)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA7C1360)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_E88782EA1EE9EB39_OFFSET UNITYSDK_OFFSET(0xA7C1AD0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0xA7C1D00)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C13C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESShaderCustomBehavior_TypeDefinitionIndex = 63705;

	class ESShaderCustomBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* SHADER_CUSTOM_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* SHADER_CUSTOM_TEMP_SELECT_SPLIT_CHAR; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		::System::String* _tempSelect; // 0x58
		::System::Int32 priority; // 0x60
		::System::Boolean ignoreWorldTimescale; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_OFFSET))(this);
		}

		::MoleMole::Config::ConfigShaderCustomBase* Method_3_CA16E66277F3799C(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA16E66277F3799C_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::Config::ConfigShaderCustomBase* Method_3_6FF3E514220A5943(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_6FF3E514220A5943_OFFSET))(this, a1);
		}

		::MoleMole::Config::ShaderCustomType Method_3_63E7CA2473DB5E8B()
		{
			return ((::MoleMole::Config::ShaderCustomType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_63E7CA2473DB5E8B_OFFSET))(this);
		}

		::System::String* Method_3_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* Method_3_5BD179982EDEB0FC(::MoleMole::EffectSimulate::FloatKeyframeCurve* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::EffectSimulate::FloatKeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_5BD179982EDEB0FC_OFFSET))(this, a1);
		}

		::MoleMole::EffectSimulate::ColorKeyframeCurve* Method_3_28AEFC556CCDC741(::NapGradient* a1)
		{
			return ((::MoleMole::EffectSimulate::ColorKeyframeCurve*(*)(::PVOID, ::NapGradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_28AEFC556CCDC741_OFFSET))(this, a1);
		}

		::MoleMole::EffectSimulate::FloatKeyframeCurve* Method_3_22FFB1F2200E3BA7(::UnityEngine::AnimationCurve* a1)
		{
			return ((::MoleMole::EffectSimulate::FloatKeyframeCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_22FFB1F2200E3BA7_OFFSET))(this, a1);
		}

		::NapGradient* Method_3_0FABA7B7C4910501(::MoleMole::EffectSimulate::ColorKeyframeCurve* a1)
		{
			return ((::NapGradient*(*)(::PVOID, ::MoleMole::EffectSimulate::ColorKeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_0FABA7B7C4910501_OFFSET))(this, a1);
		}

		::System::Void Method_3_E88782EA1EE9EB39(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_E88782EA1EE9EB39_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_FFE24DF54B83FB77(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_FFE24DF54B83FB77_OFFSET))(this, a1);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714_1()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_49AC00594530B714_1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_METHOD_3_43069389B18F0936_OFFSET))();
		}
	};
}
