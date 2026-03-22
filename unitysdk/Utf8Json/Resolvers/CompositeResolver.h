#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatter; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B0C2460)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1B0C2400)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B0C2350)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTERANDSETASDEFAULT_1_OFFSET UNITYSDK_OFFSET(0x1B0C2180)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTERANDSETASDEFAULT_2_OFFSET UNITYSDK_OFFSET(0x1B0C2260)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTERANDSETASDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B0C20A0)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x1B0C1F20)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTER_2_OFFSET UNITYSDK_OFFSET(0x1B0C1FE0)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B0C1E60)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0C2510)
#define UTF8JSON_RESOLVERS_COMPOSITERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1E50)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int CompositeResolver_TypeDefinitionIndex = 81764;

	class CompositeResolver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Utf8Json::IJsonFormatter*>** StaticGet_formatters()
		{
			return (::Il2CppArray<::Utf8Json::IJsonFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(CompositeResolver_TypeDefinitionIndex)->GetStaticField(0x475C0);
		}
		static ::Utf8Json::Resolvers::CompositeResolver** StaticGet_Instance()
		{
			return (::Utf8Json::Resolvers::CompositeResolver**)Il2CppClass::FromTypeDefinitionIndex(CompositeResolver_TypeDefinitionIndex)->GetStaticField(0x475C8);
		}
		static ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>** StaticGet_resolvers()
		{
			return (::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(CompositeResolver_TypeDefinitionIndex)->GetStaticField(0x475D0);
		}
		static ::System::Boolean* StaticGet_isFreezed()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompositeResolver_TypeDefinitionIndex)->GetStaticField(0x11C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTER_OFFSET))(resolvers);
		}

		static ::System::Void Register_1(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters)
		{
			return ((::System::Void(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTER_1_OFFSET))(formatters);
		}

		static ::System::Void Register_2(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTER_2_OFFSET))(formatters, resolvers);
		}

		static ::System::Void RegisterAndSetAsDefault(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTERANDSETASDEFAULT_OFFSET))(resolvers);
		}

		static ::System::Void RegisterAndSetAsDefault_1(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters)
		{
			return ((::System::Void(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTERANDSETASDEFAULT_1_OFFSET))(formatters);
		}

		static ::System::Void RegisterAndSetAsDefault_2(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_REGISTERANDSETASDEFAULT_2_OFFSET))(formatters, resolvers);
		}

		static ::Utf8Json::IJsonFormatterResolver* Create(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters)
		{
			return ((::Utf8Json::IJsonFormatterResolver*(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_CREATE_OFFSET))(formatters);
		}

		static ::Utf8Json::IJsonFormatterResolver* Create_1(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::Utf8Json::IJsonFormatterResolver*(*)(::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_CREATE_1_OFFSET))(resolvers);
		}

		static ::Utf8Json::IJsonFormatterResolver* Create_2(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::Utf8Json::IJsonFormatterResolver*(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_COMPOSITERESOLVER_CREATE_2_OFFSET))(formatters, resolvers);
		}
	};
}
