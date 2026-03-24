#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5F20C77812135856.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_104;
class Class_1_43BD383C98B4C0C5_46;
class Class_2_545EFF506ADB9470;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_62AA1987989F6826_METHOD_1_1E77EB897E054C3C_OFFSET UNITYSDK_OFFSET(0x8AD0800)
#define CLASS_1_62AA1987989F6826_METHOD_1_6DFEF4918C679AF0_1_OFFSET UNITYSDK_OFFSET(0x8AD0540)
#define CLASS_1_62AA1987989F6826_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x8AD0440)
#define CLASS_1_62AA1987989F6826_METHOD_1_C9BAD169903E51E3_OFFSET UNITYSDK_OFFSET(0x8AD0640)
#define CLASS_1_62AA1987989F6826__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD0270)

inline static constexpr unsigned int Class_1_62AA1987989F6826_TypeDefinitionIndex = 64950;

class Class_1_62AA1987989F6826 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_104*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_46*>* Field_1_1; // 0x18
	::Class_2_545EFF506ADB9470* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62AA1987989F6826__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_43BD383C98B4C0C5_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_46*))((::PBYTE)hIl2Cpp + CLASS_1_62AA1987989F6826_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::Struct_2_5F20C77812135856 Method_1_C9BAD169903E51E3(::System::String* a1, ::Struct_2_5F20C77812135856 a2)
	{
		return ((::Struct_2_5F20C77812135856(*)(::PVOID, ::System::String*, ::Struct_2_5F20C77812135856))((::PBYTE)hIl2Cpp + CLASS_1_62AA1987989F6826_METHOD_1_C9BAD169903E51E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DFEF4918C679AF0_1(::Class_1_43BD383C98B4C0C5_104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_104*))((::PBYTE)hIl2Cpp + CLASS_1_62AA1987989F6826_METHOD_1_6DFEF4918C679AF0_1_OFFSET))(this, a1);
	}

	::Struct_2_5F20C77812135856 Method_1_1E77EB897E054C3C(::System::String* a1, ::Struct_2_5F20C77812135856 a2, ::Struct_2_5F20C77812135856 a3)
	{
		return ((::Struct_2_5F20C77812135856(*)(::PVOID, ::System::String*, ::Struct_2_5F20C77812135856, ::Struct_2_5F20C77812135856))((::PBYTE)hIl2Cpp + CLASS_1_62AA1987989F6826_METHOD_1_1E77EB897E054C3C_OFFSET))(this, a1, a2, a3);
	}
};
