#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6E47B602565A201;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_INDEXFILEREF___C_METHOD_1_2AEDEA561DD24574_OFFSET UNITYSDK_OFFSET(0x139A5610)
#define MOLEMOLE_CONFIG_INDEXFILEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x139A55C0)
#define MOLEMOLE_CONFIG_INDEXFILEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x139A5600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexFileRef___c_TypeDefinitionIndex = 36738;

	class IndexFileRef___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::Class_1_A6E47B602565A201*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Converter_2<::Class_1_A6E47B602565A201*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexFileRef___c_TypeDefinitionIndex)->GetStaticField(0x3A320);
		}
		static ::MoleMole::Config::IndexFileRef___c** StaticGet___9()
		{
			return (::MoleMole::Config::IndexFileRef___c**)Il2CppClass::FromTypeDefinitionIndex(IndexFileRef___c_TypeDefinitionIndex)->GetStaticField(0x3A328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_2AEDEA561DD24574(::Class_1_A6E47B602565A201* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_A6E47B602565A201*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF___C_METHOD_1_2AEDEA561DD24574_OFFSET))(this, a1);
		}
	};
}
