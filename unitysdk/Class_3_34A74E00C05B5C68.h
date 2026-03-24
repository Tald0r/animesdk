#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F64460E7C7A0A4C.h"
#include "unitysdk/MoleMole/BubbleType.h"

class Class_2_53DC1420F60D9B88;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelScoreUIChildWindowController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_3_34A74E00C05B5C68_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x7E585D0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_1248912EDEC87A84_OFFSET UNITYSDK_OFFSET(0x7E58680)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_37F52BC3D007A392_OFFSET UNITYSDK_OFFSET(0x7E59260)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7E58440)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x7E584E0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_7E385430C9550361_OFFSET UNITYSDK_OFFSET(0x7E591E0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x7E58990)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_C0ED69617CDFADB9_OFFSET UNITYSDK_OFFSET(0x7E58A10)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x7E59460)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7E59180)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x7E59100)
#define CLASS_3_34A74E00C05B5C68_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x7E586F0)
#define CLASS_3_34A74E00C05B5C68__CTOR_OFFSET UNITYSDK_OFFSET(0x7E588F0)

inline static constexpr unsigned int Class_3_34A74E00C05B5C68_TypeDefinitionIndex = 39116;

class Class_3_34A74E00C05B5C68 : public ::Class_2_2F64460E7C7A0A4C<::Class_3_34A74E00C05B5C68*>
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::BubbleType, ::MoleMole::UIInLevelScoreUIChildWindowController*>* Field_3_1; // 0x70
	::Class_2_53DC1420F60D9B88* Field_3_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_GETBUBBLEWIDGET_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
	{
		return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_OPENBUBBLEROW_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* Method_3_1248912EDEC87A84()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_1248912EDEC87A84_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Boolean Method_3_C0ED69617CDFADB9(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_C0ED69617CDFADB9_OFFSET))(this, a1);
	}

	::System::Void Method_3_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_7E385430C9550361(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_7E385430C9550361_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_37F52BC3D007A392(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_37F52BC3D007A392_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
