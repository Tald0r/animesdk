#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_36BFAC499637728A.h"
#include "unitysdk/Struct_2_DB31062B5932CACE_4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F716E677DDB6769_METHOD_1_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0xE7B0230)
#define CLASS_1_5F716E677DDB6769_METHOD_1_77984DE08FE49DAE_OFFSET UNITYSDK_OFFSET(0xE7B03B0)
#define CLASS_1_5F716E677DDB6769_METHOD_1_7B4171C081CE8086_OFFSET UNITYSDK_OFFSET(0xE7B02F0)
#define CLASS_1_5F716E677DDB6769_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xE7B0460)
#define CLASS_1_5F716E677DDB6769_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xE7B02E0)
#define CLASS_1_5F716E677DDB6769_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE7B02D0)
#define CLASS_1_5F716E677DDB6769_METHOD_1_F3D10FCBD05D7C3E_OFFSET UNITYSDK_OFFSET(0xE7B04D0)
#define CLASS_1_5F716E677DDB6769__CTOR_OFFSET UNITYSDK_OFFSET(0xE7B01D0)

inline static constexpr unsigned int Class_1_5F716E677DDB6769_TypeDefinitionIndex = 42479;

class Class_1_5F716E677DDB6769 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_DB31062B5932CACE_4>* Field_1_1; // 0x10
	::Enum_3_36BFAC499637728A Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6A7CEF06F8896271(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_6A7CEF06F8896271_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B4171C081CE8086(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_7B4171C081CE8086_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77984DE08FE49DAE(::Enum_3_36BFAC499637728A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_36BFAC499637728A))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_77984DE08FE49DAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DB31062B5932CACE_4>* Method_1_F3D10FCBD05D7C3E()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DB31062B5932CACE_4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F716E677DDB6769_METHOD_1_F3D10FCBD05D7C3E_OFFSET))(this);
	}
};
