#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }

#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C7130)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C7170)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A1C7180)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumResolver___c_TypeDefinitionIndex = 27481;

	class DynamicEnumResolver___c : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicEnumResolver___c** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicEnumResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver___c_TypeDefinitionIndex)->GetStaticField(0x20230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicAssembly* __cctor_b__5_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER___C___CCTOR_B__5_0_OFFSET))(this);
		}
	};
}
