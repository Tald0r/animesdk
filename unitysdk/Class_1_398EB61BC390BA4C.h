#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_520C809486AB1156.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class TimeZoneInfo; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_398EB61BC390BA4C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x765A8E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x765D3C0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_078939D4D480E8BF_1_OFFSET UNITYSDK_OFFSET(0x765DAC0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_078939D4D480E8BF_2_OFFSET UNITYSDK_OFFSET(0x765DBA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_078939D4D480E8BF_OFFSET UNITYSDK_OFFSET(0x765A600)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_0BD46DC8CD73B388_OFFSET UNITYSDK_OFFSET(0x7659DD0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_100C1D09897DCD64_OFFSET UNITYSDK_OFFSET(0x765DCA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_1260683EEE786AE0_OFFSET UNITYSDK_OFFSET(0x7659E70)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_2457DD28E8EB78B4_OFFSET UNITYSDK_OFFSET(0x7659CA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x76591B0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x765C270)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_31C82ABDD4AEA8E1_OFFSET UNITYSDK_OFFSET(0x765D7D0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3338CDDE6B1DA5F6_OFFSET UNITYSDK_OFFSET(0x765A470)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_33E56182071BF9C8_OFFSET UNITYSDK_OFFSET(0x765D1E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_358BD871A9F6D8EC_OFFSET UNITYSDK_OFFSET(0x765A050)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_39DF58BD9C5AA523_OFFSET UNITYSDK_OFFSET(0x765AA40)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_3DBBB84585AEE192_OFFSET UNITYSDK_OFFSET(0x765B2A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_41E0DDEF11211292_OFFSET UNITYSDK_OFFSET(0x765B830)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x765D420)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_46C21B74DDD7B62E_OFFSET UNITYSDK_OFFSET(0x765CB20)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_4E5F0C484BC1A4CD_OFFSET UNITYSDK_OFFSET(0x765DE90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_1_OFFSET UNITYSDK_OFFSET(0x765BC60)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_OFFSET UNITYSDK_OFFSET(0x765A700)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_6489E9C771B92340_OFFSET UNITYSDK_OFFSET(0x765D950)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_1_OFFSET UNITYSDK_OFFSET(0x765CFC0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_OFFSET UNITYSDK_OFFSET(0x765B6A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_67480B0AF6E587A7_OFFSET UNITYSDK_OFFSET(0x7631DD0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_67FE61D6537B65C8_OFFSET UNITYSDK_OFFSET(0x765ACE0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x7659FA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_703B32A7C5EB8CDB_OFFSET UNITYSDK_OFFSET(0x765AEB0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_72BAB5F024479D8D_OFFSET UNITYSDK_OFFSET(0x765D080)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_748962C7CFBAF8D2_OFFSET UNITYSDK_OFFSET(0x765E050)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_7D46252FCDCC321D_OFFSET UNITYSDK_OFFSET(0x7659300)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_7F77D6EB070DC199_OFFSET UNITYSDK_OFFSET(0x765DF40)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_846F531723BA0187_OFFSET UNITYSDK_OFFSET(0x765D320)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8A3C9E953B929AB6_OFFSET UNITYSDK_OFFSET(0x765B760)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8B6076749C65FAED_OFFSET UNITYSDK_OFFSET(0x765B160)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0x7659010)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x765C7F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_97624FC249B12B0D_OFFSET UNITYSDK_OFFSET(0x765B8E0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_9B648E232A72278C_OFFSET UNITYSDK_OFFSET(0x765BDF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_A24CFEED1C9FCFA0_OFFSET UNITYSDK_OFFSET(0x765AFA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B20E6F6FA8476DEC_OFFSET UNITYSDK_OFFSET(0x765A770)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B2174699EBFB6343_OFFSET UNITYSDK_OFFSET(0x765C2D0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B24AAB8F84750FE9_OFFSET UNITYSDK_OFFSET(0x765A8F0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_B8B9642057C2FE91_OFFSET UNITYSDK_OFFSET(0x765C020)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x765BCD0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C39EED1E2DDD53AE_OFFSET UNITYSDK_OFFSET(0x7659410)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_C4AA67D5D098910B_OFFSET UNITYSDK_OFFSET(0x765AB10)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_D49215AAAC14BC69_OFFSET UNITYSDK_OFFSET(0x765C6A0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_D769BB48476F5A48_1_OFFSET UNITYSDK_OFFSET(0x765CD40)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_D769BB48476F5A48_OFFSET UNITYSDK_OFFSET(0x765B540)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_D8B7FE9C70BF6429_OFFSET UNITYSDK_OFFSET(0x765CA50)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_E4D4899B94C570CA_1_OFFSET UNITYSDK_OFFSET(0x7658EF0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_E4D4899B94C570CA_OFFSET UNITYSDK_OFFSET(0x765CEA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_EBC7B86785102481_OFFSET UNITYSDK_OFFSET(0x7659630)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_EFAE4323FCD86DE1_OFFSET UNITYSDK_OFFSET(0x765CB90)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_F6A54462AAB8D116_OFFSET UNITYSDK_OFFSET(0x765CCA0)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_FF4A24AA939FF4ED_1_OFFSET UNITYSDK_OFFSET(0x765E190)
#define CLASS_1_398EB61BC390BA4C_METHOD_1_FF4A24AA939FF4ED_OFFSET UNITYSDK_OFFSET(0x765BB10)
#define CLASS_1_398EB61BC390BA4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7658C50)

inline static constexpr unsigned int Class_1_398EB61BC390BA4C_TypeDefinitionIndex = 63081;

class Class_1_398EB61BC390BA4C : public ::System::Object
{
public:
	static ::System::TimeZoneInfo** StaticGet_Field_1_5()
	{
		return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x35130);
	}
	static ::System::TimeZoneInfo** StaticGet_Field_1_10()
	{
		return (::System::TimeZoneInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x35138);
	}
	static ::Struct_2_49ABC235CB23B56F* StaticGet_Field_1_12()
	{
		return (::Struct_2_49ABC235CB23B56F*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0x35140);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xCFE0);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xCFE4);
	}
	static ::System::Int64* StaticGet_Field_1_6()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xCFE8);
	}
	static ::System::Int64* StaticGet_Field_1_9()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xCFF0);
	}
	static ::System::TimeSpan* StaticGet_Field_1_11()
	{
		return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xCFF8);
	}
	static ::System::Int64* StaticGet_Field_1_14()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xD000);
	}
	static ::System::Single* StaticGet_Field_1_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xD008);
	}
	static ::System::Boolean* StaticGet_Field_1_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xD00C);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_398EB61BC390BA4C_TypeDefinitionIndex)->GetStaticField(0xD00D);
	}
	// static const ::System::Int32 Field_1_0 = 0x15180; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x93A80; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3C; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8D7AF529D633A451_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::DateTime Method_1_7D46252FCDCC321D(::System::String* a1, ::Enum_3_520C809486AB1156 a2)
	{
		return ((::System::DateTime(*)(::System::String*, ::Enum_3_520C809486AB1156))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_7D46252FCDCC321D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EBC7B86785102481(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_EBC7B86785102481_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_2457DD28E8EB78B4()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_2457DD28E8EB78B4_OFFSET))();
	}

	static ::System::Double Method_1_1260683EEE786AE0()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_1260683EEE786AE0_OFFSET))();
	}

	static ::System::Void Method_1_358BD871A9F6D8EC(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_358BD871A9F6D8EC_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_078939D4D480E8BF(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_078939D4D480E8BF_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5909BCB7614123CD()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_OFFSET))();
	}

	static ::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_02A3D10A9D535169_OFFSET))();
	}

	static ::System::DateTimeOffset Method_1_B24AAB8F84750FE9(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::DateTimeOffset(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B24AAB8F84750FE9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_39DF58BD9C5AA523(::System::Int64 a1, ::System::Int64 a2, ::System::Int64 a3)
	{
		return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_39DF58BD9C5AA523_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_6C3E18151183E806_OFFSET))();
	}

	static ::System::TimeSpan Method_1_67FE61D6537B65C8(::System::UInt64 a1)
	{
		return ((::System::TimeSpan(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_67FE61D6537B65C8_OFFSET))(a1);
	}

	static ::System::String* Method_1_703B32A7C5EB8CDB(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_703B32A7C5EB8CDB_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_C39EED1E2DDD53AE(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C39EED1E2DDD53AE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A24CFEED1C9FCFA0(::System::String* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_A24CFEED1C9FCFA0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3DBBB84585AEE192(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3DBBB84585AEE192_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_D769BB48476F5A48(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_D769BB48476F5A48_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_65C7B6867D15AAC6(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_41E0DDEF11211292(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_41E0DDEF11211292_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_5909BCB7614123CD_1()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_5909BCB7614123CD_1_OFFSET))();
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::Boolean Method_1_9B648E232A72278C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_9B648E232A72278C_OFFSET))(a1);
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::TimeSpan Method_1_B2174699EBFB6343(::System::DayOfWeek a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::TimeSpan(*)(::System::DayOfWeek, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B2174699EBFB6343_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_937F8473216A3162_OFFSET))();
	}

	static ::System::Tuple_2<::System::Int32, ::System::Int32>* Method_1_D8B7FE9C70BF6429(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_D8B7FE9C70BF6429_OFFSET))(a1, a2);
	}

	static ::System::DateTime Method_1_46C21B74DDD7B62E(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_46C21B74DDD7B62E_OFFSET))(a1);
	}

	static ::System::Void Method_1_EFAE4323FCD86DE1(::System::Int64 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_EFAE4323FCD86DE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F6A54462AAB8D116(::System::Int64 a1)
	{
		return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_F6A54462AAB8D116_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_D769BB48476F5A48_1(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_D769BB48476F5A48_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_E4D4899B94C570CA()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_E4D4899B94C570CA_OFFSET))();
	}

	static ::System::DateTime Method_1_65C7B6867D15AAC6_1(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_65C7B6867D15AAC6_1_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_33E56182071BF9C8()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_33E56182071BF9C8_OFFSET))();
	}

	static ::System::Double Method_1_8A3C9E953B929AB6(::System::DateTime a1)
	{
		return ((::System::Double(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8A3C9E953B929AB6_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_D49215AAAC14BC69()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_D49215AAAC14BC69_OFFSET))();
	}

	static ::System::Int64 Method_1_846F531723BA0187()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_846F531723BA0187_OFFSET))();
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_45AA2F5085C2C40D_OFFSET))();
	}

	static ::System::DateTime Method_1_97624FC249B12B0D(::System::DateTime a1)
	{
		return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_97624FC249B12B0D_OFFSET))(a1);
	}

	static ::System::DayOfWeek Method_1_31C82ABDD4AEA8E1(::System::Int64 a1)
	{
		return ((::System::DayOfWeek(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_31C82ABDD4AEA8E1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_6489E9C771B92340(::System::DayOfWeek a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int64(*)(::System::DayOfWeek, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_6489E9C771B92340_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_67480B0AF6E587A7()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_67480B0AF6E587A7_OFFSET))();
	}

	static ::System::DateTime Method_1_078939D4D480E8BF_1(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_078939D4D480E8BF_1_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_B8B9642057C2FE91()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B8B9642057C2FE91_OFFSET))();
	}

	static ::System::Int64 Method_1_E4D4899B94C570CA_1()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_E4D4899B94C570CA_1_OFFSET))();
	}

	static ::System::Int64 Method_1_8B6076749C65FAED(::System::String* a1, ::Enum_3_520C809486AB1156 a2)
	{
		return ((::System::Int64(*)(::System::String*, ::Enum_3_520C809486AB1156))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_8B6076749C65FAED_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_100C1D09897DCD64()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_100C1D09897DCD64_OFFSET))();
	}

	static ::System::Int64 Method_1_B20E6F6FA8476DEC()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_B20E6F6FA8476DEC_OFFSET))();
	}

	static ::System::Int64 Method_1_C4AA67D5D098910B(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_C4AA67D5D098910B_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_72BAB5F024479D8D(::System::DateTime a1)
	{
		return ((::System::Double(*)(::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_72BAB5F024479D8D_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_7F77D6EB070DC199(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_7F77D6EB070DC199_OFFSET))(a1);
	}

	static ::System::DateTime Method_1_078939D4D480E8BF_2(::System::Int64 a1)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_078939D4D480E8BF_2_OFFSET))(a1);
	}

	static ::System::Double Method_1_4E5F0C484BC1A4CD()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_4E5F0C484BC1A4CD_OFFSET))();
	}

	static ::System::DateTime Method_1_748962C7CFBAF8D2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::DateTime(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_748962C7CFBAF8D2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int64 Method_1_FF4A24AA939FF4ED(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::Int64(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_FF4A24AA939FF4ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3338CDDE6B1DA5F6(::System::Int64 a1, ::System::Int32 a2, ::System::Int64 a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_3338CDDE6B1DA5F6_OFFSET))(a1, a2, a3);
	}

	static ::System::DateTime Method_1_0BD46DC8CD73B388()
	{
		return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_0BD46DC8CD73B388_OFFSET))();
	}

	static ::System::Int64 Method_1_FF4A24AA939FF4ED_1(::System::DateTime a1, ::System::TimeZoneInfo* a2)
	{
		return ((::System::Int64(*)(::System::DateTime, ::System::TimeZoneInfo*))((::PBYTE)hIl2Cpp + CLASS_1_398EB61BC390BA4C_METHOD_1_FF4A24AA939FF4ED_1_OFFSET))(a1, a2);
	}
};
