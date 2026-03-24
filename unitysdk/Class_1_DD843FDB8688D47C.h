#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_188;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DD843FDB8688D47C_METHOD_1_0E1669BB94670093_OFFSET UNITYSDK_OFFSET(0x8A20A30)
#define CLASS_1_DD843FDB8688D47C_METHOD_1_3999906825F733F7_OFFSET UNITYSDK_OFFSET(0x8A208E0)
#define CLASS_1_DD843FDB8688D47C_METHOD_1_AA583EBBB531A8D5_OFFSET UNITYSDK_OFFSET(0x8A20F50)
#define CLASS_1_DD843FDB8688D47C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A210B0)
#define CLASS_1_DD843FDB8688D47C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A210A0)

inline static constexpr unsigned int Class_1_DD843FDB8688D47C_TypeDefinitionIndex = 50507;

class Class_1_DD843FDB8688D47C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_188*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_188*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD843FDB8688D47C_TypeDefinitionIndex)->GetStaticField(0x37F80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD843FDB8688D47C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD843FDB8688D47C__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_3999906825F733F7(::System::Object* a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD843FDB8688D47C_METHOD_1_3999906825F733F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA583EBBB531A8D5(::System::Object* a1, ::System::String* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DD843FDB8688D47C_METHOD_1_AA583EBBB531A8D5_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_188* Method_1_0E1669BB94670093(::System::Object* a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_188*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD843FDB8688D47C_METHOD_1_0E1669BB94670093_OFFSET))(this, a1, a2);
	}
};
