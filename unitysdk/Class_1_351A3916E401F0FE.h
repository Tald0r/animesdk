#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D939DC9DBE408E7;
class Class_1_E65A17A395DACDBD;
class Class_1_E85C6B6436A9E3DA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_351A3916E401F0FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA810F0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_06150765F7C4861F_OFFSET UNITYSDK_OFFSET(0x1AA81FE0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_1E65952262F93EBE_OFFSET UNITYSDK_OFFSET(0x1AA813B0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x1AA820D0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_59760BD7F2ED7128_OFFSET UNITYSDK_OFFSET(0x1AA81C30)
#define CLASS_1_351A3916E401F0FE_METHOD_1_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0x1AA81530)
#define CLASS_1_351A3916E401F0FE_METHOD_1_8471D54D53ABAC3B_OFFSET UNITYSDK_OFFSET(0x1AA81740)
#define CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_1_OFFSET UNITYSDK_OFFSET(0x1AA81A70)
#define CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_OFFSET UNITYSDK_OFFSET(0x1AA81920)
#define CLASS_1_351A3916E401F0FE_METHOD_1_B10506507C454711_OFFSET UNITYSDK_OFFSET(0x1AA816C0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AA81F80)
#define CLASS_1_351A3916E401F0FE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1AA81BC0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_F31E74DD54DF20ED_OFFSET UNITYSDK_OFFSET(0x1AA82050)
#define CLASS_1_351A3916E401F0FE_METHOD_1_FC86AAA038FC8172_OFFSET UNITYSDK_OFFSET(0x1AA81DF0)
#define CLASS_1_351A3916E401F0FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA813A0)
#define CLASS_1_351A3916E401F0FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA80F40)

inline static constexpr unsigned int Class_1_351A3916E401F0FE_TypeDefinitionIndex = 25107;

class Class_1_351A3916E401F0FE : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_351A3916E401F0FE_TypeDefinitionIndex)->GetStaticField(0x4880);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1D939DC9DBE408E7*>* Field_1_0; // 0x10
	::Class_1_E85C6B6436A9E3DA* Field_1_8; // 0x18
	::System::Diagnostics::Stopwatch* Field_1_3; // 0x20
	::Class_1_E65A17A395DACDBD* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Double Field_1_6; // 0x40
	::System::Double Field_1_7; // 0x48
	::System::UInt64 Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1E65952262F93EBE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_1E65952262F93EBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_70CD9A040B4290BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_70CD9A040B4290BE_OFFSET))(this);
	}

	::System::Void Method_1_B10506507C454711(::Class_1_1D939DC9DBE408E7* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D939DC9DBE408E7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_B10506507C454711_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8471D54D53ABAC3B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_8471D54D53ABAC3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_95ADE8ED590C5559(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_OFFSET))(this, a1);
	}

	::System::Void Method_1_95ADE8ED590C5559_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_59760BD7F2ED7128(::Class_1_1D939DC9DBE408E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D939DC9DBE408E7*))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_59760BD7F2ED7128_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_FC86AAA038FC8172(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_FC86AAA038FC8172_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06150765F7C4861F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_06150765F7C4861F_OFFSET))(this);
	}

	::System::Void Method_1_F31E74DD54DF20ED(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_F31E74DD54DF20ED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_46E030E6F5465A66_OFFSET))(this);
	}
};
