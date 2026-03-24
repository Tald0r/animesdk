#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }

#define MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER_GETFORMATTERHELPER_OFFSET UNITYSDK_OFFSET(0x1A65AF60)
#define MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A65B060)
#define MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65AF50)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int NativeGuidResolver_TypeDefinitionIndex = 26126;

	class NativeGuidResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::NativeGuidResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::NativeGuidResolver**)Il2CppClass::FromTypeDefinitionIndex(NativeGuidResolver_TypeDefinitionIndex)->GetStaticField(0x1F820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatterHelper(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER_GETFORMATTERHELPER_OFFSET))(t);
		}
	};
}
