#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_EF33F656360DF279_OFFSET UNITYSDK_OFFSET(0xC1DF440)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1DF3F0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC1DF430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBundleRef___c_TypeDefinitionIndex = 65123;

	class IndexBundleRef___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x433E0);
		}
		static ::MoleMole::Config::IndexBundleRef___c** StaticGet___9()
		{
			return (::MoleMole::Config::IndexBundleRef___c**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x433E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_EF33F656360DF279(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_METHOD_1_EF33F656360DF279_OFFSET))(this, a1);
		}
	};
}
