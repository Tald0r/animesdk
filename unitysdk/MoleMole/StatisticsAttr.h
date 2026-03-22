#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define MOLEMOLE_STATISTICSATTR_METHOD_1_023423FBC4D6F37A_1_OFFSET UNITYSDK_OFFSET(0xB3CA600)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_023423FBC4D6F37A_OFFSET UNITYSDK_OFFSET(0xB3CA460)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_063F770594F95F02_OFFSET UNITYSDK_OFFSET(0xB3C9F00)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_094E85B034039595_OFFSET UNITYSDK_OFFSET(0xB3C9060)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_117C627844A89315_OFFSET UNITYSDK_OFFSET(0xB3C9FB0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_1A0A45AF955D4EE9_OFFSET UNITYSDK_OFFSET(0xB3CAC80)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_4E117A85F626CC14_OFFSET UNITYSDK_OFFSET(0xB3CA7B0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_7043B9A9D77FB306_OFFSET UNITYSDK_OFFSET(0xB3C9A40)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xB3CB410)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_90D0DC11D34D7114_OFFSET UNITYSDK_OFFSET(0xB3C9BA0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xB3CAA20)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0xB3CA9B0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0xB3CAC20)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_3_OFFSET UNITYSDK_OFFSET(0xB3CB4A0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB3C9E90)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A93CFD6669D2B14D_OFFSET UNITYSDK_OFFSET(0xB3C93F0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_AFD7CB1F3D8E9C9F_OFFSET UNITYSDK_OFFSET(0xB3C95A0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0xB3C9D30)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D908BB9767125138_OFFSET UNITYSDK_OFFSET(0xB3C98A0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_FC22785E86E829DB_OFFSET UNITYSDK_OFFSET(0xB3CAD60)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_FCCBC857CD61BCE8_OFFSET UNITYSDK_OFFSET(0xB3CA290)
#define MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3C8F40)
#define MOLEMOLE_STATISTICSATTR__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C8D90)

namespace MoleMole
{
	inline static constexpr unsigned int StatisticsAttr_TypeDefinitionIndex = 64601;

	class StatisticsAttr : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>** StaticGet_propertyInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x3D590);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>** StaticGet_fieldInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x3D598);
		}
		::System::Boolean muted; // 0x10
		::System::String* attrName; // 0x18
		::System::Single attrTotalVal; // 0x20
		::System::String* showName; // 0x28
		::System::Single valueRate; // 0x30
		::System::Single duration; // 0x34
		::System::Single showRange; // 0x38
		::System::Single statisticRange; // 0x3C
		::System::Boolean statisticPerFrame; // 0x40
		::UnityEngine::Color showColor; // 0x44
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedAttrTotalValPerTime; // 0x58
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* attrTotalValPerTimeList; // 0x60
		::System::Single spsLessTotalTime; // 0x68
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* spsLessTimePerTimeList; // 0x70
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedPerTimeData; // 0x78
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedData; // 0x80
		::System::Single lastTime; // 0x88
		::System::Single totalValDuration; // 0x8C
		::System::Single showTime; // 0x90
		::System::Single totalStatisticRangeVal; // 0x94
		::System::Collections::Generic::Queue_1<::System::Single>* damageQueue; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* scopeValueDic; // 0xA0
		::System::Single maxValueScope; // 0xA8
		::System::Single meanValueScope; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET))();
		}

		::System::Void Method_1_094E85B034039595(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_094E85B034039595_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A93CFD6669D2B14D(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A93CFD6669D2B14D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_AFD7CB1F3D8E9C9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_AFD7CB1F3D8E9C9F_OFFSET))(this);
		}

		::System::Single Method_1_063F770594F95F02(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_063F770594F95F02_OFFSET))(this, a1);
		}

		::System::Void Method_1_117C627844A89315(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_117C627844A89315_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4E117A85F626CC14(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_4E117A85F626CC14_OFFSET))(this, a1);
		}

		::System::Single Method_1_90D0DC11D34D7114()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_90D0DC11D34D7114_OFFSET))(this);
		}

		::System::Single Method_1_023423FBC4D6F37A(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_023423FBC4D6F37A_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
		}

		::System::Single Method_1_D908BB9767125138(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D908BB9767125138_OFFSET))(this, a1);
		}

		::System::Void Method_1_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
		}

		::System::Void Method_1_1A0A45AF955D4EE9(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_1A0A45AF955D4EE9_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_FCCBC857CD61BCE8(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_FCCBC857CD61BCE8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_FC22785E86E829DB(::System::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_FC22785E86E829DB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_023423FBC4D6F37A_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_023423FBC4D6F37A_1_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A36150C5DCC8409E_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_3_OFFSET))(this);
		}

		::System::Single Method_1_B67DCF72B717FA9F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_B67DCF72B717FA9F_OFFSET))(this);
		}

		::System::Single Method_1_7043B9A9D77FB306()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_7043B9A9D77FB306_OFFSET))(this);
		}
	};
}
