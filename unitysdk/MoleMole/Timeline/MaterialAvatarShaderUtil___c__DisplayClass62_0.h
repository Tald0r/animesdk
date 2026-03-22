#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialAvatarShaderUtil___c__DisplayClass62_0_TypeDefinitionIndex = 29137;

	struct alignas(8) MaterialAvatarShaderUtil___c__DisplayClass62_0
	{
		::UnityEngine::Material* material; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_shader_pass; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_keywords_enable; // 0x20
	};
}
