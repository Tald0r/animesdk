#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_476.h"

class Class_0_16E4307DCC419505_751;
class Class_2_208CC9941471731A_1022;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A8E9E00)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1A8EA330)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8E9CE0)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1A8E9EF0)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1A8EA0F0)
#define CLASS_2_91B3AB6EFF8B8044__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E9D20)

inline static constexpr unsigned int Class_2_91B3AB6EFF8B8044_TypeDefinitionIndex = 81586;

class Class_2_91B3AB6EFF8B8044 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1022*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_476 Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_751*>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1022* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1022*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
