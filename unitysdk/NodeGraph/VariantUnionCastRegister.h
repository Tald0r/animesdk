#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { template <typename T> class IVariantUnionCaster_1; }

#define NODEGRAPH_VARIANTUNIONCASTREGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x630ED00)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCastRegister_TypeDefinitionIndex = 47408;

	class VariantUnionCastRegister : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTREGISTER__CCTOR_OFFSET))();
		}
	};
}
