#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1AA4553FE204ABD1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_1_946637E2EE927FA0;
namespace System::IO { class Stream; }

#define CLASS_1_07945D1E1581BCB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A574720)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_0D9CCCDE5FF8A5B3_OFFSET UNITYSDK_OFFSET(0x1A574910)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_3228840C1F0FA1E7_OFFSET UNITYSDK_OFFSET(0x1A574760)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1A574A50)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_6A64CBFD634AF3E4_OFFSET UNITYSDK_OFFSET(0x1A5749A0)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_7E8FB5C675ED1B80_OFFSET UNITYSDK_OFFSET(0x1A574900)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A574950)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A5748F0)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_A376D805FAF1DEA8_OFFSET UNITYSDK_OFFSET(0x1A5746E0)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A5749B0)
#define CLASS_1_07945D1E1581BCB5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A574990)
#define CLASS_1_07945D1E1581BCB5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A574500)
#define CLASS_1_07945D1E1581BCB5__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A574620)
#define CLASS_1_07945D1E1581BCB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5744B0)

inline static constexpr unsigned int Class_1_07945D1E1581BCB5_TypeDefinitionIndex = 9394;

class Class_1_07945D1E1581BCB5 : public ::System::Object
{
public:
	::Struct_2_1AA4553FE204ABD1 Field_1_3; // 0x10
	::System::IO::Stream* Field_1_2; // 0x98
	::Il2CppArray<::System::Byte>* Field_1_1; // 0xA0
	::Il2CppArray<::System::Byte>* Field_1_4; // 0xA8
	::System::Boolean Field_1_0; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3228840C1F0FA1E7(::Class_0_16E4307DCC419505_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_4*))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_3228840C1F0FA1E7_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_A376D805FAF1DEA8()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_A376D805FAF1DEA8_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_946637E2EE927FA0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946637E2EE927FA0*))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::IO::Stream* Method_1_7E8FB5C675ED1B80()
	{
		return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_7E8FB5C675ED1B80_OFFSET))(this);
	}

	::System::Void Method_1_0D9CCCDE5FF8A5B3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_0D9CCCDE5FF8A5B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_6A64CBFD634AF3E4()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_6A64CBFD634AF3E4_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Struct_2_1AA4553FE204ABD1& Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_1AA4553FE204ABD1&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07945D1E1581BCB5_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}
};
