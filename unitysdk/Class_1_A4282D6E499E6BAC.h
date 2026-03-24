#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A4282D6E499E6BAC_Enum_3_6081A1B1E788F54E.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Threading { class Thread; }

#define CLASS_1_A4282D6E499E6BAC_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x76987B0)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x7698660)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_226B087EC524E2F9_OFFSET UNITYSDK_OFFSET(0x7696D50)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_31D0844B33D15B2D_OFFSET UNITYSDK_OFFSET(0x7696990)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x76972B0)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_47EB0967FD928E32_OFFSET UNITYSDK_OFFSET(0x7698730)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_4D099D64644CEA69_OFFSET UNITYSDK_OFFSET(0x7696C90)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_572D98D38A8323AF_OFFSET UNITYSDK_OFFSET(0x76978B0)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x76982A0)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0x76970F0)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x76973C0)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x7698650)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_CE2508C99796F862_OFFSET UNITYSDK_OFFSET(0x7698570)
#define CLASS_1_A4282D6E499E6BAC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7698290)
#define CLASS_1_A4282D6E499E6BAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x7696950)
#define CLASS_1_A4282D6E499E6BAC__CTOR_OFFSET UNITYSDK_OFFSET(0x7696890)

inline static constexpr unsigned int Class_1_A4282D6E499E6BAC_TypeDefinitionIndex = 78137;

class Class_1_A4282D6E499E6BAC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4282D6E499E6BAC_TypeDefinitionIndex)->GetStaticField(0x114E0);
	}
	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Field_1_17; // 0x20
	::System::Collections::Generic::List_1<::System::Threading::Thread*>* Field_1_11; // 0x28
	::System::Action_1<::System::Single>* Field_1_0; // 0x30
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* Field_1_1; // 0x38
	::System::Collections::Generic::Queue_1<::Struct_2_DAA84C1CDD754F37>* Field_1_12; // 0x40
	::System::Diagnostics::Stopwatch* Field_1_14; // 0x48
	::System::String* Field_1_3; // 0x50
	::System::String* Field_1_2; // 0x58
	::Class_1_A4282D6E499E6BAC_Enum_3_6081A1B1E788F54E Field_1_6; // 0x60
	::System::Int32 Field_1_13; // 0x64
	::Enum_3_0A3761FE34514D6C Field_1_15; // 0x68
	::System::Boolean Field_1_16; // 0x6C
	::System::Boolean Field_1_5; // 0x6D
	::System::Boolean Field_1_8; // 0x6E
	::System::Int32 Field_1_9; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_31D0844B33D15B2D(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_31D0844B33D15B2D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_226B087EC524E2F9(::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_226B087EC524E2F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_4D099D64644CEA69(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_4D099D64644CEA69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_1_572D98D38A8323AF(::Struct_2_DAA84C1CDD754F37 a1, ::Foundation::ExceptionInfo*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37, ::Foundation::ExceptionInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_572D98D38A8323AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Foundation::ExceptionInfo* Method_1_CE2508C99796F862(::Class_1_A4282D6E499E6BAC_Enum_3_6081A1B1E788F54E a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Foundation::ExceptionInfo*(*)(::PVOID, ::Class_1_A4282D6E499E6BAC_Enum_3_6081A1B1E788F54E, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_CE2508C99796F862_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Void Method_1_47EB0967FD928E32(::System::Action_1<::System::Single>* a1, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_47EB0967FD928E32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4282D6E499E6BAC_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
