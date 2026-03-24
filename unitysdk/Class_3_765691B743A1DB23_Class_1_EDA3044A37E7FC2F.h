#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_1A345EAE5F749316_118;
class Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_765691B743A1DB23_CLASS_1_EDA3044A37E7FC2F_METHOD_1_262663FE8707AA7D_OFFSET UNITYSDK_OFFSET(0x65C1310)
#define CLASS_3_765691B743A1DB23_CLASS_1_EDA3044A37E7FC2F_METHOD_1_34407FD2A95CC2DA_OFFSET UNITYSDK_OFFSET(0x65C0D50)
#define CLASS_3_765691B743A1DB23_CLASS_1_EDA3044A37E7FC2F__CTOR_OFFSET UNITYSDK_OFFSET(0x65C0D40)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_EDA3044A37E7FC2F_TypeDefinitionIndex = 47587;

class Class_3_765691B743A1DB23_Class_1_EDA3044A37E7FC2F : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x10
	::Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B* Field_1_4; // 0x40
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x48
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x78
	::System::Int32 Field_1_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_EDA3044A37E7FC2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_34407FD2A95CC2DA(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_EDA3044A37E7FC2F_METHOD_1_34407FD2A95CC2DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_262663FE8707AA7D(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_EDA3044A37E7FC2F_METHOD_1_262663FE8707AA7D_OFFSET))(this, a1, a2);
	}
};
