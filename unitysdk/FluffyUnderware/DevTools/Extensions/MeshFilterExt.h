#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_MESHFILTEREXT_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1A241720)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_MESHFILTEREXT_PREPARENEWSHARED_OFFSET UNITYSDK_OFFSET(0x1A2414F0)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int MeshFilterExt_TypeDefinitionIndex = 24578;

	class MeshFilterExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh* PrepareNewShared(::UnityEngine::MeshFilter* m, ::System::String* name)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::MeshFilter*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_MESHFILTEREXT_PREPARENEWSHARED_OFFSET))(m, name);
		}

		static ::System::Void CalculateTangents(::UnityEngine::MeshFilter* m)
		{
			return ((::System::Void(*)(::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_MESHFILTEREXT_CALCULATETANGENTS_OFFSET))(m);
		}
	};
}
