#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/ScreenPlayer.h"

class Class_1_7ECB9691B142D586;
class Class_2_CE524E0BB2F7DB94;
class ScreenPlayData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define CLASS_2_6D5CD03082A26889_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6259900)
#define CLASS_2_6D5CD03082A26889_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6259550)
#define CLASS_2_6D5CD03082A26889_METHOD_2_279F16698CBFE4EB_OFFSET UNITYSDK_OFFSET(0x62599F0)
#define CLASS_2_6D5CD03082A26889_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x62595D0)
#define CLASS_2_6D5CD03082A26889_METHOD_2_5C5C73B12E022D7B_OFFSET UNITYSDK_OFFSET(0x6259A40)
#define CLASS_2_6D5CD03082A26889_METHOD_2_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0x62599D0)
#define CLASS_2_6D5CD03082A26889_METHOD_2_8B5D9BE407CABB96_OFFSET UNITYSDK_OFFSET(0x62599E0)
#define CLASS_2_6D5CD03082A26889_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x62599C0)
#define CLASS_2_6D5CD03082A26889_METHOD_2_A5570A6940712F82_OFFSET UNITYSDK_OFFSET(0x6259380)
#define CLASS_2_6D5CD03082A26889_METHOD_2_B0903388A7C237DB_OFFSET UNITYSDK_OFFSET(0x6258E80)
#define CLASS_2_6D5CD03082A26889_METHOD_2_D74ED01DD06B9857_OFFSET UNITYSDK_OFFSET(0x6258B30)
#define CLASS_2_6D5CD03082A26889_METHOD_2_EF9B65474F0FE119_OFFSET UNITYSDK_OFFSET(0x6259A30)
#define CLASS_2_6D5CD03082A26889_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x6259A20)
#define CLASS_2_6D5CD03082A26889_UPDATE_OFFSET UNITYSDK_OFFSET(0x6259170)
#define CLASS_2_6D5CD03082A26889__CCTOR_OFFSET UNITYSDK_OFFSET(0x6259970)
#define CLASS_2_6D5CD03082A26889__CTOR_OFFSET UNITYSDK_OFFSET(0x6258A80)

inline static constexpr unsigned int Class_2_6D5CD03082A26889_TypeDefinitionIndex = 72463;

class Class_2_6D5CD03082A26889 : public ::MoleMole::ScreenPlayer
{
public:
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D5CD03082A26889_TypeDefinitionIndex)->GetStaticField(0xFAD0);
	}
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D5CD03082A26889_TypeDefinitionIndex)->GetStaticField(0xFAD4);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* Field_2_7; // 0xB28
	::UnityEngine::Material* Field_2_2; // 0xB30
	::Foundation::AssetRequestHandle Field_2_4; // 0xB38
	::Class_1_7ECB9691B142D586* Field_2_1; // 0xB58
	::Class_2_CE524E0BB2F7DB94* Field_2_3; // 0xB60
	::UnityEngine::UI::Graphic* Field_2_0; // 0xB68

	::System::Void _ctor(::UnityEngine::UI::Graphic* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889__CCTOR_OFFSET))();
	}

	::System::Void Method_2_D74ED01DD06B9857(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_D74ED01DD06B9857_OFFSET))(this, a1);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5570A6940712F82(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_A5570A6940712F82_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Void Method_2_8131D4D8C02BAA62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_8131D4D8C02BAA62_OFFSET))(this);
	}

	::System::Void Method_2_8B5D9BE407CABB96(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_8B5D9BE407CABB96_OFFSET))(this, a1);
	}

	::System::Void Method_2_279F16698CBFE4EB(::Class_1_7ECB9691B142D586* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_279F16698CBFE4EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_EF9B65474F0FE119(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_EF9B65474F0FE119_OFFSET))(this, a1);
	}

	::UnityEngine::Texture2D* Method_2_B0903388A7C237DB(::ScreenPlayData* a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_B0903388A7C237DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C5C73B12E022D7B(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_6D5CD03082A26889_METHOD_2_5C5C73B12E022D7B_OFFSET))(this, a1);
	}
};
