#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class CRC32; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography { class MD5; }

#define CLASS_1_DD21223F72560268_METHOD_1_0E7BBD84922EA333_OFFSET UNITYSDK_OFFSET(0x1B214530)
#define CLASS_1_DD21223F72560268_METHOD_1_1132742388F2EF2B_OFFSET UNITYSDK_OFFSET(0x1B213EB0)
#define CLASS_1_DD21223F72560268_METHOD_1_14527C5CF45E63EE_1_OFFSET UNITYSDK_OFFSET(0x1B215150)
#define CLASS_1_DD21223F72560268_METHOD_1_14527C5CF45E63EE_OFFSET UNITYSDK_OFFSET(0x1B213A50)
#define CLASS_1_DD21223F72560268_METHOD_1_21E2CF5EBEEFCB77_OFFSET UNITYSDK_OFFSET(0x1B215380)
#define CLASS_1_DD21223F72560268_METHOD_1_37F69C14F74941D0_OFFSET UNITYSDK_OFFSET(0x1B2138E0)
#define CLASS_1_DD21223F72560268_METHOD_1_40AE0739DDDFC1C0_OFFSET UNITYSDK_OFFSET(0x1B214AC0)
#define CLASS_1_DD21223F72560268_METHOD_1_4212AFB618604B98_1_OFFSET UNITYSDK_OFFSET(0x1B214F20)
#define CLASS_1_DD21223F72560268_METHOD_1_4212AFB618604B98_OFFSET UNITYSDK_OFFSET(0x1B213810)
#define CLASS_1_DD21223F72560268_METHOD_1_453B4D622D83B360_OFFSET UNITYSDK_OFFSET(0x1B213D70)
#define CLASS_1_DD21223F72560268_METHOD_1_64655ED0DFEB75A8_OFFSET UNITYSDK_OFFSET(0x1B213BF0)
#define CLASS_1_DD21223F72560268_METHOD_1_6548E3A4A88F2D43_OFFSET UNITYSDK_OFFSET(0x1B214C60)
#define CLASS_1_DD21223F72560268_METHOD_1_678680AADF798FE2_OFFSET UNITYSDK_OFFSET(0x1B2141F0)
#define CLASS_1_DD21223F72560268_METHOD_1_78081ADB4E067C6E_OFFSET UNITYSDK_OFFSET(0x1B214D60)
#define CLASS_1_DD21223F72560268_METHOD_1_8EAF3C9B16DACAE5_OFFSET UNITYSDK_OFFSET(0x1B215550)
#define CLASS_1_DD21223F72560268_METHOD_1_959E8B18BB120CCC_1_OFFSET UNITYSDK_OFFSET(0x1B2155D0)
#define CLASS_1_DD21223F72560268_METHOD_1_959E8B18BB120CCC_OFFSET UNITYSDK_OFFSET(0x1B214B90)
#define CLASS_1_DD21223F72560268_METHOD_1_CE4186C814D8FE31_1_OFFSET UNITYSDK_OFFSET(0x1B214FF0)
#define CLASS_1_DD21223F72560268_METHOD_1_CE4186C814D8FE31_OFFSET UNITYSDK_OFFSET(0x1B2148E0)
#define CLASS_1_DD21223F72560268_METHOD_1_E0857CE31F36C8C0_OFFSET UNITYSDK_OFFSET(0x1B214820)
#define CLASS_1_DD21223F72560268_METHOD_1_EF19C3DF7E589D2F_OFFSET UNITYSDK_OFFSET(0x1B213B40)
#define CLASS_1_DD21223F72560268_METHOD_1_F01CBAD5FDB5DC17_OFFSET UNITYSDK_OFFSET(0x1B214780)
#define CLASS_1_DD21223F72560268_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x1B214A40)
#define CLASS_1_DD21223F72560268_METHOD_1_FD4C9CA4CAAC52E6_OFFSET UNITYSDK_OFFSET(0x1B215240)
#define CLASS_1_DD21223F72560268__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B213700)

inline static constexpr unsigned int Class_1_DD21223F72560268_TypeDefinitionIndex = 7806;

class Class_1_DD21223F72560268 : public ::System::Object
{
public:
	static ::System::Security::Cryptography::MD5** StaticGet_Field_1_0()
	{
		return (::System::Security::Cryptography::MD5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD21223F72560268_TypeDefinitionIndex)->GetStaticField(0x7040);
	}
	static ::Foundation::CRC32** StaticGet_Field_1_1()
	{
		return (::Foundation::CRC32**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD21223F72560268_TypeDefinitionIndex)->GetStaticField(0x7048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_4212AFB618604B98(::System::IO::Stream* a1)
	{
		return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_4212AFB618604B98_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_14527C5CF45E63EE(::System::IO::Stream* a1)
	{
		return ((::System::UInt64(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_14527C5CF45E63EE_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_EF19C3DF7E589D2F(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_EF19C3DF7E589D2F_OFFSET))(a1);
	}

	static ::System::String* Method_1_64655ED0DFEB75A8(::Foundation::CRC32* a1, ::System::IO::Stream* a2)
	{
		return ((::System::String*(*)(::Foundation::CRC32*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_64655ED0DFEB75A8_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_453B4D622D83B360(::Enum_3_0A3761FE34514D6C a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::Enum_3_0A3761FE34514D6C, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_453B4D622D83B360_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_F01CBAD5FDB5DC17(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_F01CBAD5FDB5DC17_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_0E7BBD84922EA333(::System::String* a1)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_0E7BBD84922EA333_OFFSET))(a1);
	}

	static ::System::String* Method_1_E0857CE31F36C8C0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_E0857CE31F36C8C0_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}

	static ::System::String* Method_1_678680AADF798FE2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_678680AADF798FE2_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_40AE0739DDDFC1C0(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_40AE0739DDDFC1C0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_959E8B18BB120CCC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_959E8B18BB120CCC_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1132742388F2EF2B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_1132742388F2EF2B_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_37F69C14F74941D0(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_37F69C14F74941D0_OFFSET))(a1);
	}

	static ::System::String* Method_1_CE4186C814D8FE31(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_CE4186C814D8FE31_OFFSET))(a1);
	}

	static ::System::String* Method_1_78081ADB4E067C6E(::System::IO::Stream* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_78081ADB4E067C6E_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4212AFB618604B98_1(::System::IO::Stream* a1)
	{
		return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_4212AFB618604B98_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_CE4186C814D8FE31_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_CE4186C814D8FE31_1_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_14527C5CF45E63EE_1(::System::IO::Stream* a1)
	{
		return ((::System::UInt64(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_14527C5CF45E63EE_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_FD4C9CA4CAAC52E6(::Enum_3_0A3761FE34514D6C a1, ::System::IO::Stream* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::Enum_3_0A3761FE34514D6C, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_FD4C9CA4CAAC52E6_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_21E2CF5EBEEFCB77(::System::IO::Stream* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_21E2CF5EBEEFCB77_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6548E3A4A88F2D43(::System::Security::Cryptography::MD5* a1, ::System::IO::Stream* a2)
	{
		return ((::System::String*(*)(::System::Security::Cryptography::MD5*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_6548E3A4A88F2D43_OFFSET))(a1, a2);
	}

	static ::System::UInt64 Method_1_8EAF3C9B16DACAE5(::System::String* a1)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_8EAF3C9B16DACAE5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_959E8B18BB120CCC_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD21223F72560268_METHOD_1_959E8B18BB120CCC_1_OFFSET))(a1, a2);
	}
};
