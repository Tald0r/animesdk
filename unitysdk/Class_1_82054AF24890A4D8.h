#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_173;
class Class_1_5DA2E7556103D5A3_280;
class Class_2_84CEDCEF739506C1_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82054AF24890A4D8_METHOD_1_22B5BF12AFD8B168_OFFSET UNITYSDK_OFFSET(0x747BC80)
#define CLASS_1_82054AF24890A4D8_METHOD_1_CEE1216948F12D88_OFFSET UNITYSDK_OFFSET(0x747B940)
#define CLASS_1_82054AF24890A4D8_METHOD_1_F68230F0BDC41370_OFFSET UNITYSDK_OFFSET(0x747BAF0)
#define CLASS_1_82054AF24890A4D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x747B8B0)

inline static constexpr unsigned int Class_1_82054AF24890A4D8_TypeDefinitionIndex = 51936;

class Class_1_82054AF24890A4D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_84CEDCEF739506C1_2*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_84CEDCEF739506C1_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82054AF24890A4D8_TypeDefinitionIndex)->GetStaticField(0x445C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CEE1216948F12D88(::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_280*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_280*>*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8_METHOD_1_CEE1216948F12D88_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F68230F0BDC41370(::Class_1_5DA2E7556103D5A3_173* a1)
	{
		return ((::System::Int32(*)(::Class_1_5DA2E7556103D5A3_173*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8_METHOD_1_F68230F0BDC41370_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_84CEDCEF739506C1_2*>* Method_1_22B5BF12AFD8B168(::Class_1_5DA2E7556103D5A3_173* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_84CEDCEF739506C1_2*>*(*)(::Class_1_5DA2E7556103D5A3_173*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8_METHOD_1_22B5BF12AFD8B168_OFFSET))(a1);
	}
};
