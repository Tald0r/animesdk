#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_614.h"

class Class_2_208CC9941471731A_1036;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_1_OFFSET UNITYSDK_OFFSET(0x1ADC6600)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_OFFSET UNITYSDK_OFFSET(0x1ADC5570)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1ADC51C0)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_66C1FFCD87DBD8D5_OFFSET UNITYSDK_OFFSET(0x1ADC5700)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_947C1FE4941F3BAA_OFFSET UNITYSDK_OFFSET(0x1ADC4F00)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_B5936D614C5B0573_OFFSET UNITYSDK_OFFSET(0x1ADC52E0)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1ADC4CF0)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1ADC5370)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1ADC4F80)
#define CLASS_2_1FF0D69CFD6F7C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC4D30)

inline static constexpr unsigned int Class_2_1FF0D69CFD6F7C6D_TypeDefinitionIndex = 81471;

class Class_2_1FF0D69CFD6F7C6D : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_4; // 0x18
	::Struct_2_1862835F8661A21F_614 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_2; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1036*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_2_947C1FE4941F3BAA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_947C1FE4941F3BAA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1036* Method_2_B5936D614C5B0573(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1036*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_B5936D614C5B0573_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1036* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1036*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_114D2BF5C0137977(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C1FFCD87DBD8D5(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_66C1FFCD87DBD8D5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_114D2BF5C0137977_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_1_OFFSET))(this, a1);
	}
};
