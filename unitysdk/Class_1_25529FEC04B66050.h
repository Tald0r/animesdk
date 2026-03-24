#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_37;
class Class_1_77D255857CC40452_1;
class Class_1_F89DFA8F8CC59AF0;
namespace MoleMole::Config { class AtmosphereData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_25529FEC04B66050_METHOD_1_02AA951262F17589_OFFSET UNITYSDK_OFFSET(0xAECC0E0)
#define CLASS_1_25529FEC04B66050_METHOD_1_0592C97889CD94A4_OFFSET UNITYSDK_OFFSET(0xAECB900)
#define CLASS_1_25529FEC04B66050_METHOD_1_10C207AE0B24C5CE_OFFSET UNITYSDK_OFFSET(0xAECBF90)
#define CLASS_1_25529FEC04B66050_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAECBEA0)
#define CLASS_1_25529FEC04B66050_METHOD_1_2ED7FC42A67523F2_OFFSET UNITYSDK_OFFSET(0xAECC0F0)
#define CLASS_1_25529FEC04B66050_METHOD_1_594ACB3D93BCCD52_OFFSET UNITYSDK_OFFSET(0xAECB6D0)
#define CLASS_1_25529FEC04B66050_METHOD_1_65EB0EA63F59446D_OFFSET UNITYSDK_OFFSET(0xAECBD10)
#define CLASS_1_25529FEC04B66050_METHOD_1_88B1E871F1C1F11E_OFFSET UNITYSDK_OFFSET(0xAECB5D0)
#define CLASS_1_25529FEC04B66050_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAECB540)
#define CLASS_1_25529FEC04B66050_METHOD_1_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0xAECC100)
#define CLASS_1_25529FEC04B66050__CTOR_OFFSET UNITYSDK_OFFSET(0xAECB460)

inline static constexpr unsigned int Class_1_25529FEC04B66050_TypeDefinitionIndex = 57342;

class Class_1_25529FEC04B66050 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>* Field_1_1; // 0x10
	::UnityEngine::Rendering::Volume* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_37*>* Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_1_88B1E871F1C1F11E(::Class_1_77D255857CC40452_1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_77D255857CC40452_1*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_88B1E871F1C1F11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_594ACB3D93BCCD52(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_594ACB3D93BCCD52_OFFSET))(this, a1);
	}

	::System::Void Method_1_0592C97889CD94A4(::MoleMole::Config::AtmosphereData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AtmosphereData*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_0592C97889CD94A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_65EB0EA63F59446D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_65EB0EA63F59446D_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_10C207AE0B24C5CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_10C207AE0B24C5CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_02AA951262F17589(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_02AA951262F17589_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::Volume* Method_1_2ED7FC42A67523F2()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_2ED7FC42A67523F2_OFFSET))(this);
	}

	::System::Void Method_1_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_E05ADF64DE351167_OFFSET))(this, a1);
	}
};
