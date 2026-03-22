#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5F4_1.h"
#include "unitysdk/MoleMole/BubbleType.h"

class Class_2_53DC1420F60D9B88;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelScoreUIChildWindowController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_3_34A74E00C05B5C68_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x6762DB0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_1248912EDEC87A84_OFFSET UNITYSDK_OFFSET(0x6762E60)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_37F52BC3D007A392_OFFSET UNITYSDK_OFFSET(0x6763170)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x6762C20)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x6762CC0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_7E385430C9550361_OFFSET UNITYSDK_OFFSET(0x67633D0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x6763C20)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_C0ED69617CDFADB9_OFFSET UNITYSDK_OFFSET(0x6763450)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6763BC0)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6763370)
#define CLASS_3_34A74E00C05B5C68_METHOD_3_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x6763B40)
#define CLASS_3_34A74E00C05B5C68_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x6762ED0)
#define CLASS_3_34A74E00C05B5C68__CTOR_OFFSET UNITYSDK_OFFSET(0x67630D0)

inline static constexpr unsigned int Class_3_34A74E00C05B5C68_TypeDefinitionIndex = 53180;

class Class_3_34A74E00C05B5C68 : public ::Class_2_534AF681CC2BD5F4_1<::Class_3_34A74E00C05B5C68*>
{
public:
	::Class_2_53DC1420F60D9B88* Field_3_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::BubbleType, ::MoleMole::UIInLevelScoreUIChildWindowController*>* Field_3_1; // 0x78

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

	::System::Boolean Method_3_37F52BC3D007A392(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_37F52BC3D007A392_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_7E385430C9550361(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_7E385430C9550361_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* Method_3_1248912EDEC87A84()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_1248912EDEC87A84_OFFSET))(this);
	}

	::System::Boolean Method_3_C0ED69617CDFADB9(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_C0ED69617CDFADB9_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A74E00C05B5C68_METHOD_3_90EC931103FB6F31_OFFSET))(this);
	}
};
