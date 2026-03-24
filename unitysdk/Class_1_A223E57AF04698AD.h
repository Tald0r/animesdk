#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D18F1D061EEF5E67_1.h"
#include "unitysdk/System/Object.h"

class Class_1_AB4E9C6220DB54FF;
class Class_2_14986121AA61AD99;
class Class_2_4521B631ACA75155;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A223E57AF04698AD_METHOD_1_08DDA81518CC599F_OFFSET UNITYSDK_OFFSET(0xF46A3B0)
#define CLASS_1_A223E57AF04698AD_METHOD_1_D440B02EFD604D2F_OFFSET UNITYSDK_OFFSET(0xF46A760)
#define CLASS_1_A223E57AF04698AD_METHOD_1_D4506E2299C17A75_OFFSET UNITYSDK_OFFSET(0xF469890)
#define CLASS_1_A223E57AF04698AD_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xF46A6D0)
#define CLASS_1_A223E57AF04698AD__CTOR_OFFSET UNITYSDK_OFFSET(0xF4696C0)

inline static constexpr unsigned int Class_1_A223E57AF04698AD_TypeDefinitionIndex = 61768;

class Class_1_A223E57AF04698AD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_D18F1D061EEF5E67_1>* Field_1_14; // 0x10
	::MoleMole::Config::ConfigPosRot* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_12; // 0x20
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_11; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_10; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_1_5; // 0x40
	::MoleMole::Config::ConfigPosRot* Field_1_7; // 0x48
	::System::Single Field_1_2; // 0x50
	::System::Int32 Field_1_0; // 0x54
	::System::Single Field_1_3; // 0x58
	::System::Boolean Field_1_8; // 0x5C
	::System::Boolean Field_1_9; // 0x5D
	::System::Int32 Field_1_13; // 0x60
	::System::Int32 Field_1_1; // 0x64

	::System::Void _ctor(::Class_2_14986121AA61AD99* a1, ::Class_1_AB4E9C6220DB54FF* a2, ::Class_1_AB4E9C6220DB54FF* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_1_AB4E9C6220DB54FF*, ::Class_1_AB4E9C6220DB54FF*))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_08DDA81518CC599F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_08DDA81518CC599F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D440B02EFD604D2F(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_D440B02EFD604D2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D4506E2299C17A75(::Class_2_14986121AA61AD99* a1, ::Class_1_AB4E9C6220DB54FF* a2, ::Class_1_AB4E9C6220DB54FF* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_1_AB4E9C6220DB54FF*, ::Class_1_AB4E9C6220DB54FF*))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_D4506E2299C17A75_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
