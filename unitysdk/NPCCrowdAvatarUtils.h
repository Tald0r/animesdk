#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdAvatarUtils_CrowdAvatarShaderInfo;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define NPCCROWDAVATARUTILS_GETCROWDSHADER_OFFSET UNITYSDK_OFFSET(0x6ED8FB0)
#define NPCCROWDAVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x6ED95B0)
#define NPCCROWDAVATARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED95A0)

inline static constexpr unsigned int NPCCrowdAvatarUtils_TypeDefinitionIndex = 73177;

class NPCCrowdAvatarUtils : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::NPCCrowdAvatarUtils_CrowdAvatarShaderInfo*>** StaticGet_CrowdShadersInfos()
	{
		return (::System::Collections::Generic::List_1<::NPCCrowdAvatarUtils_CrowdAvatarShaderInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x41980);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>** StaticGet__crowdShaderMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x41988);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Shader* GetCrowdShader(::System::String* originShaderName)
	{
		return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS_GETCROWDSHADER_OFFSET))(originShaderName);
	}
};
