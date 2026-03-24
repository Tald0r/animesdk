#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CharacterRampTexPass_CharacterRampPerMaterial.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapRenderEntity;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CHARACTERRAMPTEXPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x182C7300)
#define CHARACTERRAMPTEXPASS_RENDERRAMPTEX_OFFSET UNITYSDK_OFFSET(0x182C77D0)
#define CHARACTERRAMPTEXPASS_UPDATERAMPMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x182C8140)
#define CHARACTERRAMPTEXPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x182C9270)
#define CHARACTERRAMPTEXPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x182C7230)
#define CHARACTERRAMPTEXPASS__UPDATERAMPMATERIALPROPERTIES_G__RECALCULATECOLOR_7_0_OFFSET UNITYSDK_OFFSET(0x182C9210)

inline static constexpr unsigned int CharacterRampTexPass_TypeDefinitionIndex = 29086;

class CharacterRampTexPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_dependencyProperties()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CharacterRampTexPass_TypeDefinitionIndex)->GetStaticField(0x21DA0);
	}
	static ::System::Boolean* StaticGet_logAllRampTexUpdates()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CharacterRampTexPass_TypeDefinitionIndex)->GetStaticField(0x5690);
	}
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
	::System::String* k_ProfilerTag; // 0xB0
	::System::Collections::Generic::List_1<::CharacterRampTexPass_CharacterRampPerMaterial>* rampProperties; // 0xB8

	::System::Void _ctor(::System::String* profileTag, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + CHARACTERRAMPTEXPASS__CTOR_OFFSET))(this, profileTag, renderPassEvent);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHARACTERRAMPTEXPASS__CCTOR_OFFSET))();
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + CHARACTERRAMPTEXPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	static ::System::Void UpdateRampMaterialProperties(::NapRenderEntity* entity)
	{
		return ((::System::Void(*)(::NapRenderEntity*))((::PBYTE)hIl2Cpp + CHARACTERRAMPTEXPASS_UPDATERAMPMATERIALPROPERTIES_OFFSET))(entity);
	}

	::System::Void RenderRampTex(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean rampTexDataDirty)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + CHARACTERRAMPTEXPASS_RENDERRAMPTEX_OFFSET))(this, cmd, renderingData, rampTexDataDirty);
	}

	static ::UnityEngine::Vector3 _UpdateRampMaterialProperties_g__RecalculateColor_7_0(::UnityEngine::Color color)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + CHARACTERRAMPTEXPASS__UPDATERAMPMATERIALPROPERTIES_G__RECALCULATECOLOR_7_0_OFFSET))(color);
	}
};
