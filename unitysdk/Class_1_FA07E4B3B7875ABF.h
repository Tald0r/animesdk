#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_249BA0FC7F6B6A2B.h"
#include "unitysdk/Enum_3_972C37F6321EBB18.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8FCF3FE3F8E0AF4C;
class Class_1_EAF23F875B61917D;
class Class_2_4D61A7A49E7F7878;
class Class_3_7ADB522BB55B953F;
class Class_3_9F3861B3B9CC6874;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FA07E4B3B7875ABF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6DB13B0)
#define CLASS_1_FA07E4B3B7875ABF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6DB06F0)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x6DB1DC0)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x6DB0770)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x6DB0430)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_6804FC072C88D96A_OFFSET UNITYSDK_OFFSET(0x6DB1410)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_78CECC0FC7AE2535_OFFSET UNITYSDK_OFFSET(0x6DB19D0)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x6DB1900)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6DB05C0)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x6DB04C0)
#define CLASS_1_FA07E4B3B7875ABF_METHOD_1_E3E432332CDEA9CB_OFFSET UNITYSDK_OFFSET(0x6DB03C0)
#define CLASS_1_FA07E4B3B7875ABF__CTOR_OFFSET UNITYSDK_OFFSET(0x6DB0340)

inline static constexpr unsigned int Class_1_FA07E4B3B7875ABF_TypeDefinitionIndex = 67977;

class Class_1_FA07E4B3B7875ABF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8FCF3FE3F8E0AF4C*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EAF23F875B61917D*>* Field_1_7; // 0x18
	::MoleMole::Config::DynamicInt* Field_1_1; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x28
	::Enum_3_972C37F6321EBB18 Field_1_6; // 0x30
	::MoleMole::Config::ValueCompareType Field_1_2; // 0x34
	::Enum_3_249BA0FC7F6B6A2B Field_1_3; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF__CTOR_OFFSET))(this);
	}

	::Class_2_4D61A7A49E7F7878* Method_1_E3E432332CDEA9CB(::Class_3_7ADB522BB55B953F* a1)
	{
		return ((::Class_2_4D61A7A49E7F7878*(*)(::PVOID, ::Class_3_7ADB522BB55B953F*))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_E3E432332CDEA9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_1_FA07E4B3B7875ABF* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_FA07E4B3B7875ABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_1_FA07E4B3B7875ABF* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_FA07E4B3B7875ABF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	static ::Class_3_9F3861B3B9CC6874* Method_1_78CECC0FC7AE2535(::Class_1_FA07E4B3B7875ABF* a1, ::Class_3_7ADB522BB55B953F* a2, ::Class_2_4D61A7A49E7F7878* a3)
	{
		return ((::Class_3_9F3861B3B9CC6874*(*)(::Class_1_FA07E4B3B7875ABF*, ::Class_3_7ADB522BB55B953F*, ::Class_2_4D61A7A49E7F7878*))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_78CECC0FC7AE2535_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_FA07E4B3B7875ABF* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_FA07E4B3B7875ABF*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_6804FC072C88D96A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA07E4B3B7875ABF_METHOD_1_6804FC072C88D96A_OFFSET))(this, a1, a2);
	}
};
