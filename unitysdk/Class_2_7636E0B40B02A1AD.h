#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_945.h"

class Class_2_208CC9941471731A_978;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7636E0B40B02A1AD_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19FADEA0)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x19FADAA0)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_538A394A1ECA2F9C_OFFSET UNITYSDK_OFFSET(0x19FAE150)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_8F8499DC43BF803B_OFFSET UNITYSDK_OFFSET(0x19FADF50)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19FAD760)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x19FAD8A0)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x19FAE230)
#define CLASS_2_7636E0B40B02A1AD__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAD7A0)

inline static constexpr unsigned int Class_2_7636E0B40B02A1AD_TypeDefinitionIndex = 79245;

class Class_2_7636E0B40B02A1AD : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_978*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_978*>*>* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_945 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_978* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_978*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_978*>* Method_2_538A394A1ECA2F9C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_978*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_538A394A1ECA2F9C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_978*>* Method_2_8F8499DC43BF803B(::Class_2_208CC9941471731A_978* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_978*>*(*)(::PVOID, ::Class_2_208CC9941471731A_978*))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_8F8499DC43BF803B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
