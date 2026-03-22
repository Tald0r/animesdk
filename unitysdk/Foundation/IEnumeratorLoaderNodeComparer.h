#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class IEnumeratorLoaderNode; }

#define FOUNDATION_IENUMERATORLOADERNODECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x8FF590)
#define FOUNDATION_IENUMERATORLOADERNODECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8FF610)
#define FOUNDATION_IENUMERATORLOADERNODECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F0BD00)

namespace Foundation
{
	inline static constexpr unsigned int IEnumeratorLoaderNodeComparer_TypeDefinitionIndex = 7944;

	struct alignas(1) IEnumeratorLoaderNodeComparer
	{
		static ::Foundation::IEnumeratorLoaderNodeComparer* StaticGet_Instance()
		{
			return (::Foundation::IEnumeratorLoaderNodeComparer*)Il2CppClass::FromTypeDefinitionIndex(IEnumeratorLoaderNodeComparer_TypeDefinitionIndex)->GetStaticField(0x3890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODECOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::Foundation::IEnumeratorLoaderNode* x, ::Foundation::IEnumeratorLoaderNode* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::Foundation::IEnumeratorLoaderNode* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
