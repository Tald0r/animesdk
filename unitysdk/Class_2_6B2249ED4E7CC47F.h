#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_59F0E78803D70076;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6B2249ED4E7CC47F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x70FF5B0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_0822BE1F00D6A438_OFFSET UNITYSDK_OFFSET(0x7102A60)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_2DDA66E72D33DB14_1_OFFSET UNITYSDK_OFFSET(0x7101460)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_2DDA66E72D33DB14_OFFSET UNITYSDK_OFFSET(0x7100BD0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_3EE1BF1DD4C9EB2C_OFFSET UNITYSDK_OFFSET(0x71026F0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_4F1A3D4E1D16F1E9_OFFSET UNITYSDK_OFFSET(0x7100730)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_514A62A81B6D1373_OFFSET UNITYSDK_OFFSET(0x7102330)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_556EDA6305A13B93_OFFSET UNITYSDK_OFFSET(0x70FF6F0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x70FF2D0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x7102590)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_653D5DB2D5C019FD_OFFSET UNITYSDK_OFFSET(0x7100F00)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_7209454B6656EA49_OFFSET UNITYSDK_OFFSET(0x7101910)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x70FF340)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_C902D45520D8DD42_OFFSET UNITYSDK_OFFSET(0x7101080)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x70FF550)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0x7102600)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x7101790)
#define CLASS_2_6B2249ED4E7CC47F_ONCREATE_OFFSET UNITYSDK_OFFSET(0x70FF270)
#define CLASS_2_6B2249ED4E7CC47F__CTOR_OFFSET UNITYSDK_OFFSET(0x70FEFE0)

inline static constexpr unsigned int Class_2_6B2249ED4E7CC47F_TypeDefinitionIndex = 55516;

class Class_2_6B2249ED4E7CC47F : public ::Foundation::SingletonDisposable_1<::Class_2_6B2249ED4E7CC47F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x20
	::System::UInt32 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_DISPOSE_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_556EDA6305A13B93(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a6, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a7, ::System::String* a8, ::System::Int32 a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_556EDA6305A13B93_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_4F1A3D4E1D16F1E9(::MoleMole::Battle::Entity* a1, ::Class_3_59F0E78803D70076* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_59F0E78803D70076*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_4F1A3D4E1D16F1E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2DDA66E72D33DB14(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_2DDA66E72D33DB14_OFFSET))(this, a1);
	}

	::System::Void Method_2_C902D45520D8DD42(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_C902D45520D8DD42_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2DDA66E72D33DB14_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_2DDA66E72D33DB14_1_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_7209454B6656EA49(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a6, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a7, ::System::Int32 a8)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_7209454B6656EA49_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::MoleMole::Battle::Entity* Method_2_514A62A81B6D1373(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EntityType a2, ::System::Int32 a3, ::MoleMole::Config::CampType a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Single a7, ::System::Collections::Generic::List_1<::System::String*>* a8, ::System::String* a9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a10, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a11, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a12, ::System::String* a13, ::System::Int32 a14, ::System::Int32 a15)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType, ::System::Int32, ::MoleMole::Config::CampType, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_514A62A81B6D1373_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	::System::Void Method_2_653D5DB2D5C019FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_653D5DB2D5C019FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_2_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EA6D328EF56CB9CB(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_EA6D328EF56CB9CB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_3EE1BF1DD4C9EB2C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_3EE1BF1DD4C9EB2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_0822BE1F00D6A438(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_0822BE1F00D6A438_OFFSET))(this, a1);
	}
};
