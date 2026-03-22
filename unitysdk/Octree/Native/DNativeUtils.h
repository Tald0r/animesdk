#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Octree::Native { class INativeUtils; }

#define OCTREE_NATIVE_DNATIVEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x99E2280)

namespace Octree::Native
{
	inline static constexpr unsigned int DNativeUtils_TypeDefinitionIndex = 76948;

	class DNativeUtils : public ::System::Object
	{
	public:
		static ::Octree::Native::INativeUtils** StaticGet_utilInstance()
		{
			return (::Octree::Native::INativeUtils**)Il2CppClass::FromTypeDefinitionIndex(DNativeUtils_TypeDefinitionIndex)->GetStaticField(0x30970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVEUTILS__CCTOR_OFFSET))();
		}
	};
}
