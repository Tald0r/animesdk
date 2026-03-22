#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_102;
class Class_2_888829D5F4E4EBE0_Class_1_C25F39C28A6D9D6C;
class Class_2_A3CFC20DC3954F5C;
class Class_3_1F0B390B50451710;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x6A828A0)
#define CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_9F70EA32F370861C_OFFSET UNITYSDK_OFFSET(0x6A833A0)
#define CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_AEFB51B41A1D5BA1_OFFSET UNITYSDK_OFFSET(0x6A82580)
#define CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_CCC37AC615BA6251_OFFSET UNITYSDK_OFFSET(0x6A82620)
#define CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_E52B5DBBAF5BA809_OFFSET UNITYSDK_OFFSET(0x6A82250)
#define CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED__CTOR_OFFSET UNITYSDK_OFFSET(0x6A81FF0)

inline static constexpr unsigned int Class_2_888829D5F4E4EBE0_Class_1_4EBD8A96EA8B71ED_TypeDefinitionIndex = 62905;

class Class_2_888829D5F4E4EBE0_Class_1_4EBD8A96EA8B71ED : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::Class_2_888829D5F4E4EBE0_Class_1_C25F39C28A6D9D6C* Field_1_2; // 0x18
	::Class_2_208CC9941471731A_102* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_A3CFC20DC3954F5C*>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x30
	::System::UInt32 Field_1_0; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E52B5DBBAF5BA809(::Class_2_A3CFC20DC3954F5C* a1, ::Class_2_A3CFC20DC3954F5C* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C*, ::Class_2_A3CFC20DC3954F5C*))((::PBYTE)hIl2Cpp + CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_E52B5DBBAF5BA809_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_AEFB51B41A1D5BA1(::Class_3_1F0B390B50451710* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_1F0B390B50451710*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_AEFB51B41A1D5BA1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CCC37AC615BA6251(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_CCC37AC615BA6251_OFFSET))(this, a1);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Boolean Method_1_9F70EA32F370861C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_888829D5F4E4EBE0_CLASS_1_4EBD8A96EA8B71ED_METHOD_1_9F70EA32F370861C_OFFSET))(this, a1, a2);
	}
};
