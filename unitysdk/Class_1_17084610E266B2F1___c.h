#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D366ED82D8A1F916;
class Class_1_E25AA19765F0B270;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_1_17084610E266B2F1___C_METHOD_1_2AEDEA561DD24574_1_OFFSET UNITYSDK_OFFSET(0x8495AA0)
#define CLASS_1_17084610E266B2F1___C_METHOD_1_2AEDEA561DD24574_OFFSET UNITYSDK_OFFSET(0x8495A70)
#define CLASS_1_17084610E266B2F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8495A20)
#define CLASS_1_17084610E266B2F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8495A60)

inline static constexpr unsigned int Class_1_17084610E266B2F1___c_TypeDefinitionIndex = 49139;

class Class_1_17084610E266B2F1___c : public ::System::Object
{
public:
	static ::Class_1_17084610E266B2F1___c** StaticGet___9()
	{
		return (::Class_1_17084610E266B2F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17084610E266B2F1___c_TypeDefinitionIndex)->GetStaticField(0x3DC50);
	}
	static ::System::Converter_2<::Class_1_E25AA19765F0B270*, ::System::String*>** StaticGet___9__61_0()
	{
		return (::System::Converter_2<::Class_1_E25AA19765F0B270*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17084610E266B2F1___c_TypeDefinitionIndex)->GetStaticField(0x3DC58);
	}
	static ::System::Converter_2<::Class_1_D366ED82D8A1F916*, ::System::String*>** StaticGet___9__61_1()
	{
		return (::System::Converter_2<::Class_1_D366ED82D8A1F916*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17084610E266B2F1___c_TypeDefinitionIndex)->GetStaticField(0x3DC60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_2AEDEA561DD24574(::Class_1_E25AA19765F0B270* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_E25AA19765F0B270*))((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C_METHOD_1_2AEDEA561DD24574_OFFSET))(this, a1);
	}

	::System::String* Method_1_2AEDEA561DD24574_1(::Class_1_D366ED82D8A1F916* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_D366ED82D8A1F916*))((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C_METHOD_1_2AEDEA561DD24574_1_OFFSET))(this, a1);
	}
};
