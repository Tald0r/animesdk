#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0BCE4BE98C879308_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_0389E20EE68DEFB0.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;

#define CLASS_2_6A420A175624CDDC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6EAB250)
#define CLASS_2_6A420A175624CDDC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6EAAEC0)
#define CLASS_2_6A420A175624CDDC_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x6EAB320)
#define CLASS_2_6A420A175624CDDC_METHOD_2_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x6EAB560)
#define CLASS_2_6A420A175624CDDC_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x6EAAFB0)
#define CLASS_2_6A420A175624CDDC_METHOD_2_71F7FB928ED97D38_OFFSET UNITYSDK_OFFSET(0x6EAAD90)
#define CLASS_2_6A420A175624CDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x6EAB550)

inline static constexpr unsigned int Class_2_6A420A175624CDDC_TypeDefinitionIndex = 52543;

class Class_2_6A420A175624CDDC : public ::Class_1_0BCE4BE98C879308_1
{
public:
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_71F7FB928ED97D38(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC_METHOD_2_71F7FB928ED97D38_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DFFEA8885EDBFF0(::Struct_2_0389E20EE68DEFB0& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0389E20EE68DEFB0&))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC_METHOD_2_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_6A420A175624CDDC_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}
};
