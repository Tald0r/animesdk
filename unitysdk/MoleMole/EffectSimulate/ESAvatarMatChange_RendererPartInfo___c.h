#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_48660A14A20B9658_OFFSET UNITYSDK_OFFSET(0xC1E9B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_5508C6CF6E00C896_OFFSET UNITYSDK_OFFSET(0xC1E9B20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_AF65B3A90CFA317C_OFFSET UNITYSDK_OFFSET(0xC1E9BC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1E9AD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E9B10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex = 54445;

	class ESAvatarMatChange_RendererPartInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::Sirenix::OdinInspector::ValueDropdownItem>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::System::String*, ::Sirenix::OdinInspector::ValueDropdownItem>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C640);
		}
		static ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo___c** StaticGet___9()
		{
			return (::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C648);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C650);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::String*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_5508C6CF6E00C896(::UnityEngine::Renderer* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_5508C6CF6E00C896_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_48660A14A20B9658(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_48660A14A20B9658_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownItem Method_1_AF65B3A90CFA317C(::System::String* a1)
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_AF65B3A90CFA317C_OFFSET))(this, a1);
		}
	};
}
